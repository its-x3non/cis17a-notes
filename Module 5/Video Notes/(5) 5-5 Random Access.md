#Module5 #VideoNotes 
# 5-5 Random Access
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

## [12.9 - Random-Access Files](../Pearson%20Notes/12.9%20-%20Random-Access%20Files.md)
### [Random-Access Files](../Pearson%20Notes/12.9%20-%20Random-Access%20Files.md#Figure-12-8)
- **Sequential Access**: start at the beginning of file and go through data in file, in order, to end
	- To access 100th entry in file, go through 99 preceding entries first
- **Random Access**: access data in file in any order
	- Can access 100th entry directly

### Random Access Member Functions
#### (1 of 2)
- `seekg` (seek get): used with files open for input
- `seekp` (seek put): used with files open for output
- Used to go to a specific position in a file
#### (2 of 2)
- [`seekg`, `seekp` arguments](../Pearson%20Notes/12.9%20-%20Random-Access%20Files.md#The-seekp-and-seekg-Member-Functions):
	- Offset: number of bytes, as a `long`
	- Mode flag: Starting point to compute offset
	- [EXAMPLE](../Pearson%20Notes/12.9%20-%20Random-Access%20Files.md#Table-12-7)

### Important Note on Random Access
- If `eof` is true, then it must be cleared before `seekg` or `seekp`

### [Random Access Information](../Pearson%20Notes/12.9%20-%20Random-Access%20Files.md#The-tellp-and-tellg-Member-Functions)
- `tellg` member function: return current byte position in input file
- `tellp` member function: return current byte position in output file

### [Opening a File for Both Input and Output](../Pearson%20Notes/12.10%20-%20Opening%20a%20File%20for%20Both%20Input%20and%20Output.md)
- File can be open for input and output simultaneously
- Supports updating a file:
	- Read data from file into memory
	- Update Data
	- Write data back to file
- Use `fstream` object definition
- Can also use `ios::binary` flag for binary data.