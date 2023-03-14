#Module5 #VideoNotes
# 5-1 Files
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
## [12.1 - File Operations](../Pearson%20Notes/12.1%20-%20File%20Operations.md)
### File Operations
- File: A Set of data stored on a computer, often on a disk drive
- Programs can read from or write to files
- Used in many applications:
	- Word processing
	- Databases
	- Spreadsheets
	- Compilers

### Using Files
1) Requires `fstream` header file
	- Use `ifstream` data type for input files
	- use `ofstream` data type for output files
	- use `fstream` data type for both input, output files
2) Can use `>>` and `<<` to read from or write to a file
3) Can use `eof` member function to test for end of input file

### [`fstream` Object](../Pearson%20Notes/12.1%20-%20File%20Operations.md#Using-the-fstream-Data-Type)
- `fstream` object can be used for either input or output
- Must specify mode on the `open` statement
- Sample modes:
	- `ios::in` - input
	- `ios::out` - output
- Can be combined on `open` call:
```c++
dFIle.open("class.txt", ios::in | ios::out);
```

### [Table 12.2 - File Access Flags](../Pearson%20Notes/12.1%20-%20File%20Operations.md#Table-12-2)

### [Using Files - Example](../Pearson%20Notes/12.1%20-%20File%20Operations.md#Program-12-1)

### Default File Open Modes
- `ifstream`:
	- Open for input only
	- File cannot be written to
	- `open` fails if file does not exist
- `ofstream`:
	- Open for output only
	- File cannot be read from
	- File created if no file exists
	- File contents erased if file exists.

### More File Open Details
- Can use filename, flags in definition: `ifstream gradeList("grades.txt");`
- File stream object set to 0 (`false`) if open failed: `if (!gradeList) ...`
- Can also check fail member function to detect file open error: `if(gradeList.fail()) ...`

### [File Output Formatting](../Pearson%20Notes/12.2%20-%20File%20Output%20Formatting.md)
- Use the same techniques will file stream objects as with `cout: showpoint`, `setw(x)`, `showprecision(x)`, etc.
- Requires `iomanip` to use manipulators

### [Passing File Stream Objects to Functions](../Pearson%20Notes/12.3%20-%20Passing%20File%20Stream%20Objects%20to%20Functions.md)
- It is very useful to pass file stream objects to functions
- Be sure to always pass file stream objects by reference

## [12.4 - More Detailed Error Testing](../Pearson%20Notes/12.4%20-%20More%20Detailed%20Error%20Testing.md)
### More Detailed Error Testing
- Can examine error state bits to determine stream status
- Bits tested/cleared by Stream member functions
- [Table full of functions for Error Testing](../Pearson%20Notes/12.4%20-%20More%20Detailed%20Error%20Testing.md#Table-12-4)

### [Member Functions/Flags](../Pearson%20Notes/12.4%20-%20More%20Detailed%20Error%20Testing.md#Table-12-5)