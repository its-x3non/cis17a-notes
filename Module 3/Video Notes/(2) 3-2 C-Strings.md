#Module3 #VideoNotes 
# (2) 3-2 C-Strings
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
***
# [10.3 - C-Strings](../Pearson%20Notes/10.3%20-%20C-Strings.md)
## C-Strings
### (1 of 2)
- **C-string:** sequence of characters stored in adjacent memory locations and terminated by `NULL` character
- **[String Literal (string constant)](../Pearson%20Notes/10.3%20-%20C-Strings.md/#More-about-String-Literals):** sequence of characters enclosed in double quotes `" "`: `"Hi there!"`
### [(2 of 2)](../Pearson%20Notes/10.3%20-%20C-Strings.md#C-Strings-Stored-in-Arrays)
- Array of `char`s can be used to define for string
```c++
const int SIZE = 20;
char city [SIZE];
```
- Leave room for `NULL` at end
- Can enter a value using `cin` or `>>`
	- Input is whitespace-terminated
	- No check to see if enough space
- For input containing whitespace, and to control the amount of input, use `cin.getline()`

# [10.4 - Library Functions for Working with C-Strings](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md)
## Library Functions for Working with C-Strings
### (1 of 3)
- Require `cstring` header file
- Functions take one or more C-strings as arguments. Can use:
	- C-stringname
	- pointer to C-string
	- Literal String
### (2 of 3)
- Functions
	- [`strlen(str)`](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md#The-strlen-Function): returns length of C-string
	- [ `strcat(str1, str2)`](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md#The-strcat-Function): appends `str2` to the end of `str1`
### (3 of 3)
- Functions:
	- [`strcpy(str1, str2)`](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md#The-strcpy-Function): copies `str2` to `str1`

**NOTE:** `strcat` and `strcpy` perform no bounds checking to determine if there is enough space in receiving character array to hold the string it is being assigned.
[The `strncat` and `strncpy` Functions](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md#The-strncat-and-strncpy-Functions)

## C-String Inside a C-String
- Function:
	- [`strstr(str1,str2)`](../Pearson%20Notes/10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md#The-strstr-Function): finds the first occurrence of `str2 in str1`. Returns a pointer to match, or `NULL` if no match.

# [10.5 - String/Numeric Conversion Functions](../Pearson%20Notes/10.5%20-%20StringNumeric%20Conversion%20Functions.md)
## [String/Numeric Conversion Function](../Pearson%20Notes/10.5%20-%20StringNumeric%20Conversion%20Functions.md#Table-10-4)
- Requires `cstdilb` header file

## String/Numeric Conversion Functions - Notes
- If C-string contains non-digits, results are undefined
	- Function may return result up to non-digit
	- Function may return 0
- `itoa` does no bounds checking, make sure there is enough space to store the result.

# [Writing Your Own C-String Handling Functions](../Pearson%20Notes/10.6%20-%20Focus%20on%20Software%20Engineering%20-%20Writing%20Your%20Own%20C-String-Handling%20Functions.md)
- Designing C-String Handling Functions
	- Can pass arrays or pointers to `char` arrays
	- Can perform bounds checking to ensure enough space for results
	- Can anticipate unexpected user input
