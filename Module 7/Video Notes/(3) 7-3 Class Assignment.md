#Module7 #VideoNotes 
# 7-3 Class Assignment
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on the title to go there.
***
# [14.3 - Memberwise Assignment](../Pearson%20Notes/14.3%20-%20Memberwise%20Assignment.md)
## Memberwise Assignment
- Can use `=` to assign one object to another, or to initialize an object with an object's data
- Copies member to member. **e.g:**
```c++
instance2 = instance1;
```
means: copy all member values from `instance` and assign to the corresponding member variables of `instance2`.
- Use at initialization:
```c++
Rectangle r2 = r1;
```

# [14.4 - Copy Constructors](../Pearson%20Notes/14.4%20-%20Copy%20Constructors.md)
## Copy Constructors
### (1 of 3)
- Special constructor used when a newly created object is initialized to the data of another object of the same class
- Default copy constructor copies field-to-field
- Default copy constructor works fine in many cases
### (2 of 3)
```c++
class SomeClass
{
public:
	someClass(int val = 0)
	{ value = new int; *value = val; }
	int getVal();
	void setVal(int);
private:
	int *value;
};
```
### (3 of 3)
- what we get using memberwise copy with objects containing dynamic memory:
```c++
SomeClass object1(5);
SomeClass object2 = object1;
object2.setVal(13);
cout << object1.getVal(); // also 13
```

## Programmer-Defined Copy Constructor
### (1 of 3)
- Allows us to solve problem with objects containing pointers:
```c++
SomeClass::SomeClass(const SomeClass &obj)
{
	value = new int;
	*value = obj.value;
}
```
- Copy constructor takes a reference parameter to an object of the class
### (2 of 3)
- Each object now points to separate dynamic memory:
```c++
SomeClass object1(5);
SomeClass object2 = object1;
object2.setVal(13);
cout << object1.getVal(); // still 5
```
### (3 of 3)
- Since copy constructor has a reference to the object it is copying from,
```c++
SomeClasS::SomeClass(SomeClass &obj)
```
It can modify that object.
- To prevent this from happening, make the [parameter `const`](../Pearson%20Notes/14.4%20-%20Copy%20Constructors.md#Using-const-Parameters-in-Copy-Constructors):
```c++
SomeClass::SomeClass(const SomeClass &obj);
```

