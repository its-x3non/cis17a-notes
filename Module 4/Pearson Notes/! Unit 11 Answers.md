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

## Quiz 11.4
### Question 1
```c++
struct Money
{
    int dollars, cents;
};

Money salesAnnual {1325023,47};

```

## Quiz 11.5
### Question 1
```c++
Money monthlySales[12];
```

### Question 2
```c++
yearlySales.dollars = yearlySales.cents = 0;
for(int i = 0; i < 12; i++)
{
    yearlySales.dollars += monthlySales[i].dollars;
    yearlySales.cents += monthlySales[i].cents;
}
yearlySales.dollars += yearlySales.cents/100; 
yearlySales.cents %= 100;
```

## Quiz 11.6
### Question 1
```c++
struct StockItem
{
    string supplier, productName;
    int catalogNumber;
};

struct Customer
{
    string name, streetAddress, city, postalCode, phone;
};

struct Purchase
{
    Customer buyer;
    StockItem itemSold;
    Date dateOfSale;
    Money paid;
    bool returnable;
};

```

## Quiz 11.7
### Question 1
I fucking hate this question and it's only 11.7
```c++
double dist(Point p1, Point p2)
{
    double x = (p1.x - p2.x)*(p1.x-p2.x);
    double y = (p1.y - p2.y)*(p1.y-p2.y);
    return(sqrt(x+y));
}
```

## Quiz 11.8
### Question 1
```c++
Point getPoint()
{
    Point temp;
    cin >> temp.x >> temp.y;
    return temp;
}
```

### Question 2
```c++
Money normalize(Money original)
{
    original.dollars = original.dollars + original.cents/100;
    original.cents = original.cents % 100;
    
    return original;
}
```