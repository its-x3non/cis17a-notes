## Quiz 11-2
You shouldn't really be struggling with this quiz
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

### Question 4
Choose 1 of the 2
```c++
DATE enrolled_on;
DATE paid_on;
DATE completed_on;

// OR

DATE enrolled_on, paid_on, completed_on;
```

### Question 5
Choose 1 of the 2
```c++
Money revenue, expenses, profit;

// OR

Money revenue;
Money expenses;
Money profit;
```

#### [Next Section (11.3)](/Module%204/Pearson%20Notes/11.3%20-%20Accessing%20Structure%20Members.md)

## Quiz 11-3
### Question 1
```c++
price1-dollars = 29;
price1-cents = 95;
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

#### [Next Section (11.4)](/Module%204/Pearson%20Notes/11.4%20-%20Initializing%20a%20Structure.md)

## Quiz 11-4
### Question 1
```c++
struct Money
{
    int dollars, cents;
};

Money salesAnnual {1325023,47};

```

#### [Next Section (11.5)](/Module%204/Pearson%20Notes/11.5%20-%20Arrays%20of%20Structures.md) 

## Quiz 11-5
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

[Next Section (11.6)](/Module%204/Pearson%20Notes/11.6%20-%20Focus%20on%20Software%20Engineering%20-%20Nested%20Structures.md)

## Quiz 11-6
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

#### [Next Section (11.7)](/Module%204/Pearson%20Notes/11.7%20-%20Structures%20as%20Function%20Arguments.md)

## Quiz 11-7
### Question 1
I fucking hate this question and it's only 11-7
```c++
double dist(Point p1, Point p2)
{
    double x = (p1-x - p2.x)*(p1-x-p2.x);
    double y = (p1-y - p2.y)*(p1-y-p2.y);
    return(sqrt(x+y));
}
```

#### [Next Section (11.8)](/Module%204/Pearson%20Notes/11.8%20-%20Returning%20a%20Structure%20from%20a%20Function.md)

## Quiz 11-8
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

#### [Next Section (11.9)](/Module%204/Pearson%20Notes/11.9%20-%20Using%20Structured%20Bindings%20with%20Structures.md)

# Programming Project
```c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 1;
	string text = "i hate this programming project";
	
	// infinite loop 
	for(int i = 0; i < x; i++)
	{
		x++;
		cout << text << endl;
	}
	system("pause");
	return 0;
}
```

### The answer is down here
```c++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// function prototypes
void setEqual(string x);

int main()
{
    // create the variables
    string word;
    string wordArr[50];
    int freq[50];
    int size = 0;

    // initialize array with 0
    for (int i = 0; i < 50; i++)
        freq[i] = 0;

    // open the file
    ifstream importWords;
    importWords.open("words.txt");

    while (importWords >> word)
    {
        bool flagCheck = false;

        //set words equal to each other
        setEqual(word);

        for (int i = 0; i < size; i++)
        {
            if (wordArr[i] == word)
            {
                freq[i]++;
                flagCheck = true;
                break;
            }
        }
        if (!flagCheck)
        {
            wordArr[size] = word;
            freq[size++] = 1;
        }
    }

    //display each word + amount
    for (int i = 0; i < size; i++)
    {
        cout << wordArr[i] << " " << freq[i] << endl;
    }

    system("pause");
    return 0;
}

// FUNCTIONS

// equalize
void setEqual(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        x[i] = tolower(x[i]); 
        x[i] = toupper(x[i]);
    }
}
```

i hate this programming project

#### [Next Section (Next Chapter)](/Module%205/Pearson%20Notes/12.1%20-%20File%20Operations.md)
