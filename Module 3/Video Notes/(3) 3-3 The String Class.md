#Module3 #VideoNotes 
# (3) 3-3 The String Class
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on the title to go there.
# [10.7 - More about the C++ 'string' Class](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md)
## [The C++ `string` Class](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Using-the-`string`-Class)
- Special data type supports working with strings
	- `#include<string>`
- Can define `string` variables in programs:
	- `string firstName, lastName;`
- Can receive values with assignment operator:
```c++
firstName = "George";
lastName = "Washington";
```
- Can be displayed via `cout`
	- `cout << firstName << " " << lastName;`

## [Input into a `string` Object](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Reading-a-Line of-Input-into-a-`string`-Object)
### (1 of 2)
- Use `cin >>` to read an item into a string:
```c++
string firstName;
cout << "Enter your first name: ";
cin >> firstName;
```

### (2 of 2)
- Use `getline` function to put a line of input, possibly include spaces, into a string:
```c++
string address;
cout << "Enter your address: ";
getline(cin, address);
```

### Using `cin` and `string` Objects in [Program 10-16](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Program-10-16)

## [`string` Comparison](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Comparing-and-Sorting-`string`-Objects)
- Can use relational operators directly to compare string objects.
- Comparison is performed similar to [the `strcmp` function](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md#The-`strcmp`-Function). Result is `true` or `false`.

## [Other Definitions of C++ `strings`](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Table-10-7)

## [`string` Operators](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Table-10-8)

## `string` Member Functions
- Are behind overloaded operators
- [Categories](../Pearson%20Notes/10.7%20-%20More%20about%20the%20C++%20'string'%20Class.md#Table-10-9)
	- Assignment: `assign, copy, data`
	- Modification: `append, clear, erase, insert, replace, swap`
	- Space Management: `capacity, empty, length, resize, size`
	- Substrings: `find, front, back, at, substr`
	- Comparison: `compare`