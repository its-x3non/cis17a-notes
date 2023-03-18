#Module6 #VideoNotes 
# 6-1 Intro to Classes
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

# [13.1 - Procedural and Object-Oriented Programming](../Pearson%20Notes/13.1%20-%20Procedural%20and%20Object-Oriented%20Programming.md)
## Procedural and Object-Oriented Programming
- **Procedural Programming:** Focuses on the process/actions that occur in a program
- **Object-Oriented Programming:** Based on the data and the functions that operate on it. Objects are instances of ADTs that represent the data and its functions

## Limitations of Procedural Programming
- If the data structures change, many functions must also be changed
- Programs that are based on complex functions hierarchies are:
	- Difficult to understand and maintain
	- Difficult to modify and extend
	- Easy to break

## Object-Oriented Programming Terminology
- **class:** like a `struct` (allows bundling of related variables), but variables and functions in the class can have different properties than in a `struct`
- **object:** an instance of a `class`, in the same way that a variable can be an instance of a `struct`
- **attributes:** member of a class
- **methods/behaviors:** member functions of a class

## [Class and Objects](../Pearson%20Notes/13.1%20-%20Procedural%20and%20Object-Oriented%20Programming.md#Classes-and-Objects)
- A Class is like blueprint and objects are like houses built from the blueprint

## More on Objects
- [**Data Hiding:**](../Pearson%20Notes/13.1%20-%20Procedural%20and%20Object-Oriented%20Programming.md#The-Importance-of-Data-Hiding) restricting access to certain members of an object
- **Public Interface:** members of an object that are available outside of the object. This allows the object to provide access to some data and functions without sharing its internal details and design, and provides some protection from data corruption.

# [13.2 - Introduction to Classes](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md)
## Introduction to Classes
- Objects are created from a class
- Format:
```c++
class ClassName
{
	declaration;
	// ... more declarations
	// may follow...
};
```

### [Class Example](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md#Rectangle-Class-Example)

## [Access Specifiers](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md#Access-Specifiers)
- Used to control access to members of the class
- `pubilc`: can be access by functions outside of the class
- `private`: can only be called by or accessed by functions that are members of the class

## [More on Access Specifiers](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md#Placement-of-public-and-private-Members)
- Can be listed in any order in a class
- Can appear multiple times in a class
- If not specified, the default is `private`

## [Using `const` with Member Functions](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md#Using-const-with-Member-Functions)
- `const` appearing after the parentheses in a member function declaration specifies that the function will not change any data in the calling object.

## [Defining a Member Function](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md#Defining-Member-Functions)
- When defining a member function:
	- Put prototype in class declaration
	- Define function using class name and scope resolution operator `(::)`

## [Accessors and Mutators](../Pearson%20Notes/13.2%20-%20Introduction%20to%20Classes.md#Accessors-and-Mutators)
- **Mutator:** a member function that stores a value in a private member variable, or changes its value in some way
- **Accessor:** function that retrieves a value from a private member variable. Accessors do not change an object's data, so they should be marked as `const`.

## [Defining an Instance of a Class](../Pearson%20Notes/13.3%20-%20Defining%20an%20Instance%20of%20a%20Class.md)
- An object is an instance of a class
- Defined like structure variables: `Rectangle r`
- Access members using dot operator
- Compiler error if attempt to access private member using dot operator

## [Avoiding Stale Data](../Pearson%20Notes/13.3%20-%20Defining%20an%20Instance%20of%20a%20Class.md#Avoid-Stale-Data)
- Some data is the result of a calculation.
- In the `Rectangle` class the area of a rectangle is calculated.
	- length x width
- If we were to use an `area` variable here in the `Rectangle` class, its value would be dependent on the length and the width.
- If we change `length` or `width` without update `area`, then `area` would become **stale**.
- To avoid stale data, it is best to calculate the value of that data within a member function rather than store it in a variable.

## [Pointer to an Object](../Pearson%20Notes/13.3%20-%20Defining%20an%20Instance%20of%20a%20Class.md#Pointers-to-Objects)
- Can define a pointer to an object: `Rectangle *rPtr = nullptr;`
- Can access public members via pointer:
```c++
rPtr = &otherRectangle;
rPtr->setLength(12.5);
cout << rPtr->getLength() << endl;
```

## [Dynamically Allocating an Object](../Pearson%20Notes/13.3%20-%20Defining%20an%20Instance%20of%20a%20Class.md#Using-Smart-Pointers-to-Allocate-Objects)
- We can also use a pointer to dynamically allocate an object.
- `unique_ptr<Rectangle> rectanglePtr(new Rectangle);`

