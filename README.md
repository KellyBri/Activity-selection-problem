# Activity Selection Problem
--------------------------------------------------------------------------------------
It is for those who wants to figure out how to arrange the utilization of something.



### Example

>Assume there are n people want to rent the car, however, one car cannot be rented to two or more people. So, the clerk of rental company have to check whether there is any customer rent the car at the same time and achieve the maximal efficiency of the car. The following is the customers' time interval of renting:

  - Customer 1: 12/1 - 12/4
  - Customer 2: 12/3 - 12/5
  - Customer 3: 12/1 - 12/6
  - Customer 4: 12/5 - 12/7
  - Customer 5: 12/3 - 12/8
  - Customer 6: 12/5 - 12/9
  - Customer 7: 12/6 - 12/10

The clerk can use this program to get the arrangement easily.

### Usage

```sh
    $ git clone
    $ cd ./ActivitySelectionProblem
    $ g++ -c ActivitySelectionProblem.cpp
    $ ./ActivitySelectionProblem
```

### Input 
    The number of items: 7
    The start time of item:  1 3 1 5 3 5 6
    The finish time of item: 4 5 6 7 8 9 10

### Output
    2  (1,4)
It means that the item can be used for 2 customers   (customer 1, customer 4)