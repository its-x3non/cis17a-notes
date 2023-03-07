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