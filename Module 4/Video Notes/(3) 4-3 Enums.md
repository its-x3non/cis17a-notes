#Module4 #VideoNotes 
# [11.12 - Enumerated Data Types](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md)
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

## Enumerated Data Types
### (1 of 9)
- An enumerated data type is a programmer-defined data type. It consists of values known as **enumerators**, which represent integer constants.
### (2 of 9)
```c++
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
```
- The identifiers listed inside the example are the **enumerators**. They represent the values that belong to the example data type (in which this case is `Day`).
### (3 of 9)
```c++
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
```
- The enumerators are not strings, so they aren't enclosed in quotes, they are just identifiers.
### (4 of 9)
- Once you have created an enumerated data type in your program, you can define variables of that type: `Day workDay;`
- The statement defines `workDay` as a variable of the `Day` type.
### (5 of 9)
- We may assign any of the enumerators to a variable of the `Day` type. Example: `workDay = WEDNESDAY;`
### (6 of 9)
- An **enumerator** is pretty much something like an integer named constant. Internally, the complier assigns integer values to the enumerators, beginning at 0.
### (7 of 9)
```c++
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

// Which in memory:
// MONDAY    = 0
// TUESDAY   = 1
// WEDNESDAY = 2
// THURSDAY  = 3
// FRIDAY    = 4
```
### (8 of 9)
```c++
cout << MONDAY << " " << WEDNESDAY << " " << FRIDAY << endl;

// Output:
// 0 2 4
```

## [Assigning an Integer to an `enum` Variable](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Assigning-an-Integer-to-an-enum-Variable)
- You cannot directly assign an integer value to an `enum` variable.
```c++
workDay = 3; // error
```
- You have to cast the integer:
```c++
workDay = static_cast<Day>(3);
```

## [Assigning an Enumerator to an `int` Variable](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Assigning-an-Enumerator-to-an-int-Variable)
- You **can** assign an enumerator to an `int` variable:
```c++
int x;
x = THURSDAY;
// x will be = to 3
```

## [Comparing Enumerator Values](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Comparing-Enumerator-Values)
- Enumerator values can be compared using the relational operators. 
```c++
if (FRIDAY > MONDAY)
{
	cout << "Friday is greater than monday" << endl;
}
```

## [Using Math Operators with `enum` Variables](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Using-Math-Operators-to-Change-the-Value-of-an-enum-Variable)
### (1 of 2)
- You can run into problems when trying to perform math operations with `enum` variables.
```c++
Day day1, day2; // Defines 2 Day variables
day1 = TUESDAY; // Assign TUESDAY to day1
day2 = day1 + 1; // Will not work
```
- The 3rd statement doesn't work since the expression `day1 + 1` results in the integer value 2, and you can't store an `int` within an `enum` variable.
### (2 of 2)
- You can fix this by using a cast:
```c++
day2 = static_cast<Day>(day1 + 1);
```

## [Using an `enum` Variable to Step through an Array's Elements](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Using-an-enum-Variable-to-Step-through-an-Array's-Elements)
### (1 of 3)
- Because enumerators are stored in memory as integers, you can use them as array subscripts. For example:
```c++
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY }; 
const int NUM_DAYS = 5;  double sales[NUM_DAYS]; 
sales[MONDAY] = 1525.0;      // Stores 1525.0 in sales[0]. 
sales[TUESDAY] = 1896.5;     // Stores 1896.5 in sales[1]. 
sales[WEDNESDAY] = 1975.63;  // Stores 1975.63 in sales[2]. 
sales[THURSDAY] = 1678.33;   // Stores 1678.33 in sales[3]. 
sales[FRIDAY] = 1498.52;     // Stores 1498.52 in sales[4].
```
### (2 of 3)
- Remember, you can't use the `++` operator on an `enum` variable so the following loop will not work:
```c++
Day workDay;  // Define a Day variable 
// ERROR!!! This code will NOT work. 
for (workDay = MONDAY; workDay <= FRIDAY; workDay++)
{
	cout << "Enter the sales for day "
	<< workDay << ": ";
	cin >> sales[workDay]; 
}
```
### (3 of 3)
- You must rewrite the loop's update expression using a cast:
```c++
for (workDay = MONDAY; workDay <= FRIDAY;               workDay = static_cast<Day>(workDay + 1))
{
	cout << "Enter the sales for day "
	<< workDay << ": ";
	cin >> sales[workDay];
}
```

## [Enumerators Must Be Unique Within the Same Scope](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Enumerators-Must-Be-Unique-within-the-Same-Scope)
- Enumerators must be unique within the same scope.
- For example:
```c++
enum Presidents { MCKINLEY, ROOSEVELT, TAFT }; enum VicePresidents { ROOSEVELT, FAIRBANKS, SHERMAN }; // Error!
```
- An error will result if both of the following enumerated types are declared within the same scope. In the example, `ROOSEVELT` is declared twice, which will result in an error.

## [Using Strongly Typed `enum`s in C++ 11](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Strong-Type-enums)
- In C++ 11, you can use a new type of `enum`, which is known as a **strongly typed `enum`**.
- This allows you to have multiple enumerators in the same scope with the same name:
```c++
enum class Presidents { MCKINLEY, ROOSEVELT, TAFT }; enum class VicePresidents { ROOSEVELT, FAIRBANKS, SHERMAN };
```
- Prefix the enumerator with the name of the `enum`, followed by the `::` operator:
```c++
Presidents prez = Presidents::ROOSEVELT; VicePresidents vp = VicePresidents::ROOSEVELT;
```
- Use a cast operator to retrieve the integer value:
```c++
int x = static_cast<int>(Presidents::ROOSEVELT);
```

## [Declaring the Type and Defining the Variables in One Statement](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Declaring-the-Type-and-Defining-the-Variables-in-One-Statement)
- You can declare an enumerated data type and define one or more variables of the type in the same statement. For example:
```c++
enum Car { PORSCHE, FERRARI, JAGUAR } sportsCar;
```
- This code declares the `Car` data type and defines a variable named `sportsCar`.

## [Anonymous Enumerated Types](../Pearson%20Notes/11.12%20-%20Enumerated%20Data%20Types.md#Anonymous-Enumerated-Types)
- An **anonymous enumerated type** is simply one that does not have a name.
- For example:
```c++
enum { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};
```