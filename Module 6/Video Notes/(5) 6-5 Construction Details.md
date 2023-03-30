#Module6 #VideoNotes 
# 6-5 Construction Details
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
***
# [13.10 - Overloading Constructors](../Pearson%20Notes/13.10%20-%20Overloading%20Constructors.md)
## Overloading Constructors
- A class can have more than one constructor
- Overloaded constructors in a class must have different parameter lists

## [Only One Default Constructor and One Destructor](../Pearson%20Notes/13.10%20-%20Overloading%20Constructors.md#Only-One-Default-Constructor-and-One-Destructor-(Summarized))
- Do not provide more than one default constructor for a class: one that takes no arguments and one that has default arguments for all parameters
- Since a destructor takes no arguments, there can only be one destructor for a class.

## [Member Function Overloading](../Pearson%20Notes/13.10%20-%20Overloading%20Constructors.md#Other-Overloaded-Member-Functions)
- Non-constructor member functions can also be overloaded
```c++
void setCost(double);
void steCost(char *);
```
- Must have unique parameter lists as for constructors

## [Using Private Member Functions](../Pearson%20Notes/13.11%20-%20Private%20Member%20Functions.md)
- A `private` member function can only be called by another member function
- It is used for internal processing by the class, not for use outside the class
- The `createDescription` function in [`ContactInfo.h` (v2)](../Pearson%20Notes/13.11%20-%20Private%20Member%20Functions.md).