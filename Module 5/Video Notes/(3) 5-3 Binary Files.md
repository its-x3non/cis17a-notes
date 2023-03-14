#Module5 #VideoNotes 
# 5-3 Binary files
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
## [12.7 - Binary Files](../Pearson%20Notes/12.7%20-%20Binary%20Files.md)
### Binary Files
#### (1 of 3)
- **Binary File** contains unformatted, non-ASCII data
- Indicate by using `bniary` flag on open:
```c++
inFile.open("nums.dat", ios::in | ios::binary);
```
#### (2 of 3)
- Use [`read`](../Pearson%20Notes/12.7%20-%20Binary%20Files.md#read-Member-Function) and [`write`](../Pearson%20Notes/12.7%20-%20Binary%20Files.md#write-Member-Function) instead of `<<` and `>>`
#### [(3 of 3)](../Pearson%20Notes/12.7%20-%20Binary%20Files.md#Writing-Dat-other-than-char-to-Binary-Files)
To `read`, `write` non-character data, you must use a typecast operator to treat the address of the data as a character address.