#Module2 #VideoNotes 
# (6) Smart Pointers
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
# [9.10 - Using Smart Pointers to Avoid Memory Leaks](../Pearson%20Notes/9.10%20-%20Using%20Smart%20Pointers%20to%20Avoid%20Memory%20Leaks.md)
## Using Smart Pointers to Avoid Memory Leaks
### (1 of 2)
- In C++ 11, **smart pointers** can be used to dynamically allocate memory and not worry about deleting the memory when you are finished using it.
- There are 3 types:
	- `uniqute_ptr`
	- `sharted_ptr`
	- `weak_ptr`
- It must `#include` the memory header file:
	- `#include <memory`
- We introduce `unique_ptr`:
	- `unique_ptr<int> ptr(new int)`

### (2 of 2)
#### Figure 9-12
![Smart Pointer - Figure 9-12](../Pearson%20Notes/9.10%20Photos/Figure%209-12.png)
- The notation `<int>` indicates that the pointer can point to an `int`
- The name of the pointer is `ptr`
- The expression `new int` allocates a chunk of memory to hold an `int`
- The address of the chunk of memory will be assigned to `ptr`