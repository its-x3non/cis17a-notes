#Module6 #VideoNotes 
# 6-3 Constructors
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

# [13.7 - Constructors](../Pearson%20Notes/13.7%20-%20Constructors.md)
## Constructors
- Member function that is automatically called when an object is created
- Purpose is to construct an object
- Constructor function name is class name
- Has no return type

## Passing Arguments to Constructors
- To create a constructor that takes arguments:
	- Indicates parameters in prototype
	- Use parameters in the definition
- You can pass arguments to the constructor when you create an object: `Rectangle r(10, 5);`

## More About [Default Constructors](../Pearson%20Notes/13.7%20-%20Constructors.md#The-Default-Constructor)
- If all of a constructor's parameters have default arguments, then it is a default constructor: `Rectangle(double = 0, double = 0)`
- Creating an object and passing no arguments will cause this constructor to execute: `Rectangle r;`