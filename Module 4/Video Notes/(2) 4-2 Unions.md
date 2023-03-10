#Module4 #VideoNotes 
# 11.11  Unions
- Similar to a `struct`, but
	- All members share a single memory location
	- Only one member of the union can be used at a time
- Declared using `union`, otherwise the same as `struct`
- Variables defined as for `struct` variables

## Anonymous Union
- A `union` without a union tag:
```c++
union { ... };
```
- Must use `static` if declared outside of a function
- Allocates memory at declaration time
- Can refer to members directly without dot operator
- Uses only one memory location, which saves space