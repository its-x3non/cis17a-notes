#Module7 #VideoNotes 
# 7-4 Operator Overloading
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on the title to go there.
***
# [14.5 - Operator Overloading](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md)
## Operator Overloading
### (1 of 2)
- Operators such as `=, +` and others can be redefined when used with objects of a class
- The name of the function for the overloaded operator is `operator` followed by the operator symbol
	- `operator+` - to overload the `+` operator
	- `operator=` - to overload the `-` operator
- Prototype for the overloaded operator goes in the declaration of the class that is overloading it
- Overloaded operator function definition goes with other member functions
### (2 of 2)
- Prototype:
```c++
void operator=(const SoemClass &rval)
```
- **void**: return type
- **`operator`**: function name
- **`const SomeClass &rval`**: parameter for object on right side of operator
- Operator is called via object on left side

## Invoking an Overloaded Operator
- Operator can be invoked as a member function:
```c++
object1.operator=(object2);
```
- It can also be used in more conventional manner:
```c++
object1 = object2;
```

## Returning a Value
### (1 of 2)
- Overloaded operator can return a value
```c++
class Point2d
{
public:
	double operator-(const point2d &right)
	{ reutnr sqrt(pow((x-right.x),2)+ pow((y-right.y),2)); }
	...
private:
int x, y;
};

Point2d point1(2,2), point2(4,4);
// Compute and display distance between 2 opints
cuot << point2 - point1 << endl; // displays 2.82843
```
### (2 of 2)
- Return type the same as the left operand supports notation like:
```c++
object1 = object2 = object3;
```
- Function declared as follows:
```c++
const SomeClass operator=(const someClass &rval)
```
- In function, include as last statement:
```c++
return *this;
```

## [The `This` Pointer](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#The-this-Pointer)
- **`this`**: predefined pointer available to a class's member functions
- Always points to the instance (object) of the class whose function is being called
- Is passed as a hidden argument to all non-static member functions
- Can be used to access members that may be hidden by parameters with same name

## Notes on Overloaded Operators
- Can change meaning of an operator
- Cannot change the number of operands of the operator
- [Only certain operators can be overloaded.](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#Some-General-Issues-of-Operator-Overloading)

## Overloading Types of Operators
- `++, --` operators overloaded differently for [prefix](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#Overloading-the-Prefix-++-Operator) vs. [postfix](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#Overloading-the-Postfix-++-Operator) notation
- [Overloaded relational operators](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#Overloading-Relational-Operators) should return a `bool` value
- Overloaded stream operators [`>>, <<`](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#Overloading-the-<<-and->>-Operators) must return reference to `istream, ostream` objects and take `istream, ostream` objects as parameters

## [Overloaded Subscript operator](../Pearson%20Notes/14.5%20-%20Operator%20Overloading.md#Overloading-the-Subscript-Operator)
- Can create classes that behave like arrays, provide bounds-checking on subscripts
- Must consider constructor, destructor
- Overloaded `[]` returns a reference to object, not an object itself

