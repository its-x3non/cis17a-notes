Enjoy :3

# Module 1
## Question 1:
A \_\_\_\_\_\_\_\_ algorithm is a method of locating a specific item of information in a larger collection of data.
### Answer:
Search

## Question 2:
The advantage of a linear search is its \_\_\_\_\_\_\_\_.
### Answer:
Simplicity

## Question 3:
A(n) \_\_\_\_\_\_\_\_ search is more efficient than a \_\_\_\_\_\_\_\_ search.
### Answer:
Binary, Linear

## Question 4:
A binary search begins with the \_\_\_\_\_\_\_\_ element of an array.
### Answer:
Middle

## Question 5:
The \_\_\_\_\_\_\_\_ sort usually performs few exchanges than the \_\_\_\_\_\_\_\_ sort.
### Answer:
Selection, Bubble

## Question 6:
Array elements must be \_\_\_\_\_\_\_\_ before a binary search can be performed.
### Answer:
Sorted

## Question 7:
Using a linear search to find a value that is stored in the last element of an array of 20,000 elements, \_\_\_\_\_\_\_\_ element(s) must be compared.
### Answer:
20,000

## Question 8:
A(n) \_\_\_\_\_\_\_\_ search uses a loop to sequentially step through an array.
### Answer:
Linear

## Question 9:
Data that is sorted in ascending order is ordered \_\_\_\_\_\_\_\_.
### Answer:
From lowest to highest value

## Question 10:
Regardless of the algorithm being used, a search through an array is always performed \_\_\_\_\_\_\_\_.
### Answer:
None of these

# Module 2
## Question 11:
The \_\_\_\_\_\_\_\_, also known as the address operator, returns the memory address of a variable.
### Answer:
Ampersand (`&`)

## Question 12:
With pointer variables, you can \_\_\_\_\_\_\_\_ manipulate data stored in other variables.
### Answer:
Indirectly

## Question 13:
The statement:
```c++
int *ptr = nullptr;
```
has the same meaning as \_\_\_\_\_\_\_\_.
### Answer:
```c++
int* ptr = nullptr;
```

## Question 14:
When you work with a dereferenced pointer, you are actually working with \_\_\_\_\_\_\_\_.
### Answer:
The actual value of the variable whose address is stored in the pointer variable.

## Question 15:
\_\_\_\_\_\_\_\_ can be used as pointers.
### Answer:
Array Names

## Question 16:
The contents of pointer variables may be changed with mathematical statements that perform \_\_\_\_\_\_\_\_.
### Answer:
Addition and Subtraction

## Question 17:
In C++ 11, the \_\_\_\_\_\_\_\_ key word was introduced to represent the address 0.
### Answer:
nullptr

## Question 18:
What does the following statement do?
```c++
double *num2;
```
### Answer:
Declares a pointer variable named num2

## Question 19:
When the less than (`<`) operator is used between two pointer variables, the expression is testing whether \_\_\_\_\_\_\_\_.
### Answer:
The address of the first variable comes before the address of the second variable in the computer's memory

## Question 20:
Look at the following statement:
```c++
sum += *array++;
```
This statement \_\_\_\_\_\_\_\_.
### Answer:
Assigns the dereferenced pointer's value, then increments the pointer's address

## Question 21:
Use the delete operator only on pointers that were \_\_\_\_\_\_\_\_.
### Answer:
Created with the new operator

## Question 22:
A function may return a pointer, but the programmer must ensure that the pointer \_\_\_\_\_\_\_\_.
### Answer:
Still points to a valid object after the function ends

## Question 23:
Which of the following statements is not valid C++ code?
### Answer:
All of these are invalid.

## Question 24:
When this is placed in front of a variable name, it returns the address of that variable.
### Answer:
Ampersand (`&`)

## Question 25:
What will the following statement output?
```c++
cout << &num1;
```
### Answer:
The memory address of the variable called num1

## Question 26:
A pointer variable is designed to store \_\_\_\_\_\_\_\_.
### Answer:
A memory address

## Question 27:
Look at the following statement:
```c++
int *ptr = nullptr;
```
### Answer:
ptr is a pointer variable that will store the address of an integer variable

## Question 28:
Assuming ptr is a pointer variable, what will the following statement output?
```c++
cout << *ptr;
```
### Answer:
The value stored in the variable whose address is contained in ptr.

## Question 29:
The \_\_\_\_\_\_\_\_ and \_\_\_\_\_\_\_\_ operators can be used to increment or decrement a pointer variable
### Answer:
`++`, `--`

## Question 30:
Not all arithmetic operators may be performed on pointers. For example, you cannot \_\_\_\_\_\_\_\_ or \_\_\_\_\_\_\_\_ a pointer.
### Answer:
Multiple, Divide

## Question 31:
Which statement displays the address of the variable num1?
### Answer:
```c++
cout << &num1;
```

## Question 32:
The following statement:
```c++
cin >> *num3;
```
### Answer:
Stores the keyboard input into the variable pointed to by num3

## Question 33:
Dynamic memory allocation occurs \_\_\_\_\_\_\_\_.
### Answer:
When a new variable is created at runtime

## Question 34:
The following statement:
```c++
int *ptr = new int;
```
### Answer:
Assigns an address to the variable named ptr

## Question 35:
If you are using an older compiler that does not support the C++ 11 standard, you should initialize pointers with \_\_\_\_\_\_\_\_.
### Answer:
The integer 0, or the value NULL

## Question 36:
Every byte in the computer's memory is assigned a unique \_\_\_\_\_\_\_\_.
### Answer:
Address

## Question 37:
When you pass a pointer as an argument to a function, you must \_\_\_\_\_\_\_\_.
### Answer:
None of these

## Question 38:
A pointer variable may be initialized with \_\_\_\_\_\_\_\_.
### Answer:
A valid address in the computer's memory

## Question 39:
If a variable uses more than one byte of memory, for pointer purposes its address is \_\_\_\_\_\_\_\_.
### Answer:
The address of the first byte of storage

## Question 40:
What will the following code output?
```c++
int number = 22;
int *var = &number;
cout << *var << endl;
```
### Answer:
22

## Question 41:
What will the following code output?
```c++
int number = 22;
int *var = &number;
cout << var << endl;
```
### Answer:
The address of the number variable

## Question 42:
What will the following code output?
```c++
int *numbers = new int[5];
for(int i = 0; i <= 4; i++)
	*(numbers + i) = i;

cout << numbers[2] << endl;
```
### Answer:
2

## Question 43:
Look at the following code:
```c++
int numbers[] = {0,1,2,3,4};
int *ptr = numbers;
ptr++;
```
### Answer:
ptr will hold the address of `numbers[1]`.

## Question 44:
To help prevent memory leaks from occurring in C++ 11, a \_\_\_\_\_\_\_\_ automatically deletes a chunk of dynamically allocated memory when the memory is no longer being used.
### Answer:
Smart Pointer

# Module 3
## Question 45:
To test whether a character is numeric digit character, use this function.
### Answer:
isdigit

## Question 46:
To test whether a character is a printable character, use this function.
### Answer:
isprint

## Question 47:
This is the escape sequence representing the null terminator.
### Answer:
`\0`

## Question 48:
The null terminator stands for this ASCII code.
### Answer:
0

## Question 49:
This function accepts a pointer to a C-string as an argument, and it returns the length of the C-string (not include the null terminator).
### Answer:
strlen

## Question 50:
The strcpy function's arguments are:
### Answer:
Two addresses

## Question 51:
A library function that can find one C-string inside another is:
### Answer:
strstr

## Question 52:
This function accepts a C-string as an argument and converts the string to a long integer.
### Answer:
atol

## Question 53:
This function converts a C-string to an integer and returns the integer value.
### Answer:
atoi

## Question 54:
Which statement converts the string "10" to the integer value 10?
### Answer:
```c++
atoi("10")
```

## Question 55:
The function will return true if its argument is a printable character other than a digit, letter, or space.
### Answer:
ispunct

## Question 56:
The C-string `company[12]` can hold \_\_\_\_\_\_\_\_.
### Answer:
Eleven characters and the null terminator

## Question 57:
Look at the following statement.
```c++
if(!isdigit(var1))
```
The expression being tested by this statement will evaluate to true if var1 is:
### Answer:
- [x] An Alphabetic Character
- [x] A symbol such as `$` or `&`

## Question 58:
"Whitespace" encompasses which of the following?
### Answer:
- [x] Tab
- [x] Newline
- [x] Space

## Question 59:
A practical application of this function is to allow a user to enter a response of 'y' or 'Y' to a prompt.
### Answer:
- [x] tolower
- [x] toupper

## Question 60:
This function accepts a C-string containing a number as its argument and returns the integer equivalent.
### Answer:
atoi

## Question 61:
To determine whether a character entered is a letter of the alphabet, use this function.
### Answer:
isalpha

## Question 62:
To determine whether a character is whitespace, use this function.
### Answer:
isspace

## Question 63:
To change a character argument from lower to upper case, use this function.
### Answer:
toupper

## Question 64:
What is the output of the following statement?
```c++
cout << tolower(toupper('Z')) << endl;
```
### Answer:
lower case z

# Module 4
## Question 65:
This describes only the general characteristics of an object.
### Answer:
Abstraction

## Question 66:
Which of the following is an example of a C++ privative data type?
### Answer:
- [x] Unsigned short int
- [x] Long double
- [x] Unsigned char

## Question 67:
This is required after the closing brace of the structure declaration.
### Answer:
Semicolon

## Question 68:
Look at the following statement.
```c++
bookList[2].publisher[3] = 't';
```
This statement \_\_\_\_\_\_\_\_
### Answer:
Will store the character 't' in the fourth element of the publisher member of `booklist[2]`

## Question 69:
When a structure is passed \_\_\_\_\_\_\_\_ to a function, its members are not copied.
### Answer:
By reference

## Question 70:
Passing a structure as a constant reference parameter to a function \_\_\_\_\_\_\_\_.
### Answer:
Guarantees not to result in changes to the structure's members

## Question 71:
This is like a structure, except all members occupy the same memory area.
### Answer:
Union

## Question 72:
Members of a(n) \_\_\_\_\_\_\_\_ union have names, but the union itself has no name.
### Answer:
anonymous

## Question 73:
If Circle is a structure tag, the statement:
```c++
Circle doSomething(Circle c2)
```
can be the header line for a function that \_\_\_\_\_\_\_\_.
### Answer:
Takes a circle structure as a parameter, does something, and returns a Circle structure

## Question 74:
Which of the following assigns a value to the hourlyWage member of `employee[2]`?
### Answer:
```c++
employee[2].hourlyWage = 100.00;
```

## Question 75:
You mat use a pointer to a structure as a \_\_\_\_\_\_\_\_.
### Answer:
- [x] Function parameter
- [x] Structure member
- [x] Function return type

## Question 76:
If an anonymous union is declared globally (outside all functions), it must be \_\_\_\_\_\_\_\_.
### Answer:
Declare static

## Question 77:
Data types that are created by the programmer are known as \_\_\_\_\_\_\_\_.
### Answer:
Abstract data types (ADT)

## Question 78:
Before a structure can be used, it must be \_\_\_\_\_\_\_\_.
### Answer:
Declared

## Question 79:
The name of the structure is referred to as its \_\_\_\_\_\_\_\_.
### Answer:
None of these

## Question 80:
This allows you to access structure members.
### Answer:
Dot operator

## Question 81:
A function \_\_\_\_\_\_\_\_ return a structure.
### Answer:
May

## Question 82:
A structure pointer contains \_\_\_\_\_\_\_\_.
### Answer:
The address of a structure variable

## Question 83:
To dereference a structure pointer, the appropriate operator is \_\_\_\_\_\_\_\_.
### Answer:
The structure pointer operator, `->`

## Question 84:
If `a` is a structure variable and `p`, a pointer, is a member of the structure, what will the following statement do?
```c++
cout << *a.p;
```
### Answer:
Output the dereference value pointed to by `p`

# Module 5
## Question 85:
Data stored here disappears once the program stops running or the computer is powered down.
### Answer:
in RAM

## Question 86 & 87 (They're the same):
In order, the three-step process of using a file in a C++ program involves:
### Answer:
Open the file, read/write/save data, close the file

## Question 88:
This data type can be used to create files and write information to them but cannot used to read information from them.
### Answer:
ofstream

## Question 89:
This data type can be used to create files, read data from them, and write data to them.
### Answer:
fstream

## Question 90:
Which statement opens a file and links it to a file stream object?
### Answer:
```c++
file.open("c:\\filename.txt");
```

## Question 91:
What is true about the following statement?
```c++
out.open("values.dat", ios::app);
```
### Answer:
If the file already exists, its contents are preserved and all output is written to the end of the file.

## Question 92:
Which of the following statements open the file info.txt for both input and output?
### Answer:
```c++
dataFile.open("info.txt", ios::in | ios::out);
```

## Question 93:
The \_\_\_\_\_\_\_\_ marker is the character that marks the end of a file, and is automatically written when the file is closed.
### Answer:
End of File (EOF)

## Question 94:
This state bit can be tested to see if the end of an input stream is encountered.
### Answer:
```c++
ios::eofbit
```

## Question 95:
This member function reads a single character from a file.
### Answer:
get

## Question 96:
This member function can be used to store binary data to a file.
### Answer:
write

## Question 97:
To access files from a C++ program, you muse use this directive:
### Answer:
```c++
#include <fstream>
```

## Question 98:
To set up a file to perform file I/O, you must declare:
### Answer:
One or more file stream objects

## Question 99:
ofstream, ifstream, and fstream are:
### Answer:
Data types

## Question 100:
This data type can be used to create files and read information from them into memory.
### Answer:
ifstream