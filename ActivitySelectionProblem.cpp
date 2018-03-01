// Activity Selection Problem

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct activity{
    int index;
    int start;
    int finish;
};
activity A[101],temp;

int partition(int p,int q){
    
    int x,i,j;
    unsigned seed = (unsigned)time(NULL);
    srand (seed);
    
    //randomize select pivot
    j=q-p+1;
    i= p+ rand() % j;
    
    //exchange with A[p]
    temp=A[i];
    A[i]=A[p];
    A[p]=temp;
    
    x=A[p].finish;
    i=p;
    for (j=p+1; j<=q; j++) {
        if (A[j].finish<=x) {
            i++;
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;
        }
    }
    //exchange with pivot
    temp=A[p];
    A[p]=A[i];
    A[i]=temp;
    
    return i;
}

void quicksort(int p,int r){
    
    int q;
    if (p<r) {
        q=partition(p,r);
        quicksort(p,q-1);
        quicksort(q+1,r);
    }
}

int main() {
    
    int n,Ans[101];
    
    //read n(item number)
    cout<<"Input the number of item: ";
    cin>>n;
    
    
    for (int i=1; i<=n; i++) A[i].index=i;
    //read the start time of items
    cout<< "Input the start of these items:"<< endl;
    for (int i=1; i<=n; i++) cin>> A[i].start;
    //read the finish time of items    
    cout<< "Input the start of these items:"<< endl;   
    for (int i=1; i<=n; i++) cin>> A[i].finish;
    

    //sorting f[]
    quicksort(1, n);
    
    //find the answer
    Ans[1]=A[1].index;
    
    int N=1, j=1;

    for (int i=2,j=1; i<=n; i++) {
        if (A[i].start>=A[j].finish) {
            N++;
            Ans[N]=A[i].index;
            j=i;
        }
    }
    
    //output   (1,4,8,11)
    cout<< N<< "  (";

    for (int i=1; i<=N; i++) {
        cout<< Ans[i];
        if (i<N) cout<<",";
        else cout<<")";
    }
    cout<<endl;
    return 0;
}