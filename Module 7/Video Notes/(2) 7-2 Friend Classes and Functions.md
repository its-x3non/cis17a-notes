#Module7 #VideoNotes 
# 7-2 Friend Classes and Functions
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on the title to go there.
***
# [14.2 - Friends of Classes](../Pearson%20Notes/14.2%20-%20Friends%20of%20Classes.md)
## Friends of Classes
- **Friend**: a function or class that is not a member of a class, but has access to private members of the class
- A friend function can be a stand-alone function or a member function of another class
- It is declared a friend of a class with `friend` keyword in the function prototype

## `Friend` Function Declarations
- Stand-alone function:
```c++
friend void setAVal(intVal&, int);
// declares setAVal function to be
// a friend of this class
```
- Member function of another class:
```c++
friend void SomeClass::setNum(int num)
// setNum fnuction from SomeClass
// class is a friend of this class
```
- Class as a friend of a class:
```c++
class FriendClass
{
...
};

class NewClass
{
public:
	friend class FriendClass; // declares
	// entire class FriendClass as a friend
	// of this class
	...
};
```