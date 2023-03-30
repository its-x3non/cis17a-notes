#Module6 #VideoNotes 
# 6-2 Separating Specification from Implementation
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
***
# [13.5 - Separating Class Specification from Implementation](../Pearson%20Notes/13.5%20-%20Focus%20on%20Software%20Engineering.md)
## Separating Specification from Implementation
- Place class declaration in a header file that serves as the **class specification file.** Name the file **Classname.h**
- Place member function definitions in **ClassName.cpp**. File should `#include` the class specification file
- Programs that use the class must `#include` the class specification file, and be compiled and linked with the member function definitions

# [13.6 - Inline Member Functions](../Pearson%20Notes/13.6%20-%20Inline%20Member%20Functions.md)
## Inline Member Function
- Member functions can be define
	- **inline**: in class declaration
	- After the class declaration
- Inline appropriate for short function bodies:
```c++
int getWidth() const
	{ return width; }
```

## Tradeoffs - Inline Vs. Regular Member Functions
- Regular Functions: when called, compiler stores return address of call, allocates memory for local variables, etc.
- Code for an inline function is copied into program in place of call - larger executable program, but no function call overhead, [hence faster execution](../Pearson%20Notes/13.6%20-%20Inline%20Member%20Functions.md#Inline-Functions-and-Performance).