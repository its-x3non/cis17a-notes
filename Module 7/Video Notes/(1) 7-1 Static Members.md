#Module7 #VideoNotes 
# 7-1 Static Members
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on the title to go there.
***
# [14.1 - Instance and Static Members](../Pearson%20Notes/14.1%20-%20Instance%20and%20Static%20Members.md)
## Instance and Static Members
- **[Instance Variable](../Pearson%20Notes/14.1%20-%20Instance%20and%20Static%20Members.md#Instance-Variables)**: a member variable in a class. Each object has its own copy.
- **[`static` Variable](../Pearson%20Notes/14.1%20-%20Instance%20and%20Static%20Members.md#Static-Member-Variables)**: One variable shared among all objects of a class
- **`Static` Member Function**: can be used to access `static` member variable; can be called before any objects are defined.

## [Three Instances of the Tree Class, but Only One `Objectcount` Variable](../Pearson%20Notes/14.1%20-%20Instance%20and%20Static%20Members.md#Figure-14-2)

## [`Static` Member Function](../Pearson%20Notes/14.1%20-%20Instance%20and%20Static%20Members.md#Static-Member-Functions)
- Declared with `static` before return type:
```c++
static int getObjectCount() const
{ return objectCount; }
```
- Static member functions can only access static member data
- Can be called independent of objects:
```c++
int num = Tree:getObjectCount();
```