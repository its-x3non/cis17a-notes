#Module5 #VideoNotes
# 5-2 Files
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

## [12.5 - Member Functions for Reading and Writing Files](../Pearson%20Notes/12.5%20-%20Member%20Functions%20for%20Reading%20and%20Writing%20Files.md)
### Member Functions for Reading and Writing Files
- Functions that may be used for input with whitespace, to perform single character I/O, or to return to the beginning of an input file.
- Member Functions:
	- `getline`: reads input including whitespace
	- `get`: reads a single character
	- `put`: writes a single character

## [The `getline` Function](../Pearson%20Notes/12.5%20-%20Member%20Functions%20for%20Reading%20and%20Writing%20Files.md#The-getline-Function)
- Three arguments:
	- Name of a file stream
	- Name of a `string` object
	- Delimiter character of your choice
	- Examples, using the files stream object `myFile`, and the `string` objects `name` and `address`:
	- If left out, `'\n'` is default for third argument.
```c++
getline(myFile, name);
getline(myFile, address, '\t');
```

## Single Character I/O
- [`get`](../Pearson%20Notes/12.5%20-%20Member%20Functions%20for%20Reading%20and%20Writing%20Files.md#The-get-Member-Function): read a single character from a file
```c++
char letterGrade;
gradeFile.get(letterGrade);
// Will read any character including whitespace
```
- [`put`](../Pearson%20Notes/12.5%20-%20Member%20Functions%20for%20Reading%20and%20Writing%20Files.md#The-put-Member-Function): write a single character to a file
```c++
reportFile.put(letterGrade);
```

## [Working with Multiple Files](../Pearson%20Notes/12.6%20-%20Focus%20on%20Software%20Engineering%20-%20Working%20with%20Multiple%20Files.md)
- Can have more than 1 file open at a time in a program
- Files may be open for input or output
- Need to define the stream object for each file