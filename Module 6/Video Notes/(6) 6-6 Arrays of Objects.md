#Module6 #VideoNotes 
# 6-6 Arrays of Objects
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

# [13.12 - Arrays of Objects](../Pearson%20Notes/13.12%20-%20Arrays%20of%20Objects.md)
## Arrays of Objects
### (1 of 4)
- Objects can be the elements of an array: `InventoryItem inventory[40]`
- Default constructor for object is used when array is defined

### (2 of 4)
- Must use initializer list to invoke constructor that takes arguments

### (3 of 4)
- If the constructor requires more than one argument, the initializer must take the form of a function cell.

### (4 of 4)
- It isn't necessary to call the same constructor for each object in an array

## [Accessing Objects in an Array](../Pearson%20Notes/13.12%20-%20Arrays%20of%20Objects.md#Accessing-Members-of-Objects-in-an-Array)
- Objects in an array are referenced using subscripts
- Member functions are referenced using dot notation:
```c++
inventory[2].setUnits(30);
cout << inventory[2].getUnits();
```