# Unit 11 Quiz/Test Answers
## Quiz 11.2 - You shouldn't really be struggling with this quiz
### Question 1
```c++
struct Book
{
    int nCopies, nPages, nAuthors;
};
```

### Question 2
```c++
struct Money 
{
    int dollars, cents;
};
```

### Question 3
```c++
Book bestSeller;
```

### Question 4 - Choose 1 of the 2
```c++
DATE enrolled_on;
DATE paid_on;
DATE completed_on;

// OR

DATE enrolled_on, paid_on, completed_on;
```

### Question 5 - Choose 1 of the 2
```c++
Money revenue, expenses, profit;

// OR

Money revenue;
Money expenses;
Money profit;
```

## Quiz 11.3
### Question 1
```c++
price1.dollars = 29;
price1.cents = 95;
```

### Question 2
```c++
cin >> sales.dollars;
cin.ignore();   // Im not sure if this is really needed
				// But I included it just to be safe

cin >> sales.cents;
```

### Question 3
```c++
if(payRate.cents >= 50)
{
    payRate.dollars += 2;
    payRate.cents -= 50;
}
else
{
    payRate.dollars += 1;
    payRate.cents += 50;
}
```

## 11.4
### Question 1
```c++
struct Money
{
    int dollars, cents;
};

Money salesAnnual {1325023,47};

```