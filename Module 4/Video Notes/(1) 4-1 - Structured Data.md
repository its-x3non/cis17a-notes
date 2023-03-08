#Module4 #VideoNotes
# 4-1 - Structured Data
## [11.1 - Abstract Data Types](/Module%204/Pearson%20Notes/11.1%20-%20Abstract%20Data%20Types)
### Abstract Data Types
- A data type that specifies
	- Values that can be stored
	- Operations that can be done on the values
- User of an abstract data type does not need to know the implementation of the data type, **example** how the data is stored
- ADTs are created by programmers

### Abstraction and Data Types
- **Abstraction:** a definition that captures general characteristics without details
	- Example: An abstract triangle is a 3-sided polygon. A specific triangle may be scalene, isosceles, or equilateral.
- **Data Type** defines the values that can be stored in a variable and the operations that can be performed on it.

## [11.2 - Combining Data into Structures](/Module%204/Pearson%20Notes/11.2%20-%20Structures)
### Combining Data into Structures
- **Structure:** C++ construct that allows multiple variables to be grouped together
- General Format:
```c++
struct <structName>
{
	type1 field1;
	type2 field2;
	...
};
```

#### Example `struct` Declaration
```c++
struct Student // <-- Structure Tag
{
	int StudentID;
	string name;
	short yearInSchool;
	double gpa;
	// These are all srtucture members
}; // <-- Has to end in a semicolon to be declared
```

### `struct` Declaration Notes
- Must have `;` after closing bracket `}`
- `struct` names commonly begin with uppercase letter
- Multiple fields of same type can be in comma-separated list:
```c++
string name, address;
```

### Defining Variables
- `struct` declaration does not allocate memory or create variables
- To define variables, use structure tag as type name:
![(Pearson Example) 11.2 - Figure 11-1.png](/Module%204/Pearson%20Notes/11.2%20Photos/11.2%20-%20Figure%2011-1.png)

## [11.3 - Accessing Structure Members](/Module%204/Pearson%20Notes/11.3%20-%20Accessing%20Structure%20Members)
### Accessing Structure Members
- Use the (`.`) operator to refer to members of `struct` variables:
```c++
cin >> stu1.studentID;
getline(cin, stu1.name);
sti1.gpa = 3.75;
```
- Member variables can be used in any manner appropriate for their data type.

### Displaying a `struct` Variable
- To display the contents of a `struct` variable, must display each field separately, using the `dot` operator: [HERE](/Module%204/Pearson%20Notes/11.3%20-%20Accessing%20Structure%20Members#%20Dot%20Operator%20Display)

### [Comparing struct Variables](/Module%204/Pearson%20Notes/11.3%20-%20Accessing%20Structure%20Members#Comparing%20Structure%20Variables)
- Cannot compare `struct` variables directly:
```c++
if (bill == william) // won't work
```
- Instead, must compare on a field basis:
```c++
if (bill.studentID == william.studentID) ...
```

### [Initializing a Structure](/Module%204/Pearson%20Notes/11.4%20-%20Initializing%20A%20Structure)
- `struct` variable can be initialized when defined:
```c++
Student s = {11465, "Joan",2 , 3.75};
```
- Can also be initialized member-by-member after definition:
```c++
s.name = "Joan";
s.gpa = 3.75;
```
- May initialize only some members:
```c++ 
Student bill = {14579}
```
- Cannot skip over members:
```c++
Student s = {1234, "John", , 2.83}; // illegal
```
- Cannot initialize in the structure declaration, since this does not allocate memory.

### [Arrays Of Structures](/Module%204/Pearson%20Notes/11.5%20-%20Arrays%20of%20Structures)
- Structures can be defined in arrays
- Can be used in place of parallel arrays
```c++
const int NUM_STUDENTS = 20;
Student stuList[NUM_STUDENTS];
```
- Individual structures accessible using subscript notation
- Fields within structures accessible using `dot` notation: `cout << stuList[5].studentID;`

# [11.6 - Nested Structures](/Module%204/Pearson%20Notes/11.6%20-%20Focus%20on%20Software%20Engineering%20-%20Nested%20Structures)
## Nested Structures
- A structure can contain another structure as a member:
```c++
struct PersonInfo
{
	string name, address, city;
};

struct Student
{
	int studentID;
	PersonInfo pData;
	short yearInSchool;
	double gpa;
}
```
[Another Example](/Module%204/Pearson%20Notes/11.6%20-%20Focus%20on%20Software%20Engineering%20-%20Nested%20Structures#Nested%20Example)

## Members of Nested Structures
- Use the dot `(.)` operator multiple times to refer to fields of nested structures:
```c++
Student s;
s.pData.name = "Joanne";
s.pData.city = "Tulsa";
```

## [Structures as Function Arguments](/Module%204/Pearson%20Notes/11.7%20-%20Structures%20as%20Function%20Arguments)
- May pass members of `struct` variables to functions:
```c++
computeGPA(stu.gpa);
```
- May pass entire `struct` variables to functions:
```c++
showData(stu);
```
- Can use reference parameter if function needs to modify contents of structure variable.

## Structure as Function Arguments - Notes
- Using value parameter for structure can slow down a program, waste space
- Using a reference parameter will speed up program, but function may change data in structure
- Using a `const` reference parameter allows read-only access to reference parameter, doesn't waste space, very speedy

# [11.8 - Returning a Structure from a Function](/Module%204/Pearson%20Notes/11.8%20-%20Returning%20a%20Structure%20from%20a%20Function)
## Returning a Structure from a Function
- Function can return a `struct`:
```c++
Student getStudentData();   // protype
stu1 = getStudentData();    // call
```
- Function must define a local structure
	- For internal use
	- For use with `return` statement

# [11.9 - Pointers to Structures](/Module%204/Pearson%20Notes/11.10%20-%20Pointers%20to%20Structures)
## Pointers to Structures
- A structure variable has an address
- Pointers to structures are variables that can hold the address of a structure:
```c++
Student *stuPtr;
```
- Can use `&` operator to assign address:
```c++
stuPtr = & stu1;
```
- Structure pointer can be a function parameter

## Accessing Structure Members via Pointer Variable
- Must use `()` to dereference pointer variable, not field within structure:
```c++
cout << (*stuPtr).studentID;
```
- The dot `(.)` is used for actually referencing a struct/object
- Can use structure pointer operator to eliminate `()` and use clearer notation:
```c++
cout << stuPtr->studentID;
```
- The arrow `(->)` is used for referencing the pointer going to the dereference and then getting the property we are looking for.
#### [When to use the dot or arrow operators](/Module%204/Pearson%20Notes/11.11%20-%20Focus%20on%20Software%20Engineering)