#Module2 #VideoNotes
# (1) Pointer Basics
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
# [9.1 - Getting the Address of a Variable](../Pearson%20Notes/9.1%20-%20Getting%20the%20Address%20of%20a%20Variable.md)
## Getting the Address of a Variable
- Each variable in program is sorted at a unique address
- Use address operator `&` to get address of a variable:
```c++
// Example
int num = -99; 
cout << &num; // prints address in hexadecimal
```

```c++
// In effect
int main()
{
	int x = 25;

	cout << "The address of x is " << &x << endl;
	cout << "The size of x is " << sizeof(x) << " bytes\n";
	cout << "The value in x is " << x << endl;
	return 0;
}
```
## [Pointer Variables](../Pearson%20Notes/9.2%20-%20Pointer%20Variables.md)
### (1 of 5)
- **Pointer Variable:** Often just called a pointer, it's a variable that hold an address
- Because a pointer variable holds the address of another piece of data, it "points to the data".
### (2 of 5)
- Pointer variables are yet another way using a memory address to work with a piece of data.
- Pointers are more "low-level" than arrays and reference variables
- This means that I am responsible for finding the address that I want to store in the pointer and correctly using it.
### (3 of 5)
- Definition:
```c++
int *intptr;
```
- Read as: "`intptr` can hold the address of an int"
- Spacing in definition does not matter:
```c++
int * intptr; // same as above
int* intptr;  // same as above
```
### (4 of 5)
- Assigning an address to a pointer variable:
```c++
int *intptr;
intptr = &num;
```
- Memory Layout:
![Pointer Basics - Pointer Variables diagram](1%20-%20Pointer%20Basics%20Photos/Pointer%20Basics%20-%20Pointer%20Variables%20Diagram.png)
### (5 of 5)
- Initialize pointer variables with the special value `nullptr`.
- In C++ 11, the `nullptr` key word was introduce to represent the address 0.
- Example: `int *ptr = nullptr`

```c++
int main(){
	int x = 25;
	int *ptr = nullptr;

	ptr = &x;
	cout << "The value in x is " << x << endl;
	cout << "The address of x is " << ptr << endl;
	return 0;
}
```

## [Something Like Pointers](../Pearson%20Notes/9.2%20-%20Pointer%20Variables.md#Creating-and-Using-Pointer-Variables)
### Arrays (1 of 2)
- Use `showValues[array, int];` to pass the array `numbers`
### Arrays (2 of 2)
- The `values` parameter, in the `showValues` function, points to the `numbers` array
![Pointer Basics - Something Like Pointers - Arrays](1%20-%20Pointer%20Basics%20Photos/Pointer%20Basics%20-%20Something%20Like%20Pointers%20-%20Arrays.png)
- C++ automatically stores the address of `numbers` in the `values` parameter
### Refrence Variables (1 of 2)
- Suppose we have this function:
```c++
void getOrder (int &donuts)
{
	cout << "How many doughnuts do you want? ";
	cin >> donuts;
}
```
- And we call it with:
```c++
int jellyDonuts;
getOrder(jellyDonuts);
```
### Reference Variables (2 of 2)
- The `donuts` parameter, in the `getOrder` function, points to the `jellyDonuts` variable. 
![Pointer Basics - Something Like Pointers - Reference Variables](1%20-%20Pointer%20Basics%20Photos/Pointer%20Basics%20-%20Something%20Like%20Pointers%20-%20Reference%20Variables.png)
- C++ automatically stores the address of `jellyDonuts` in the `donuts` parameter

## [The Indirection Operator](../Pearson%20Notes/9.2%20-%20Pointer%20Variables.md#Figure-9-4)
- The indirection operator (\*) dereferences a pointer.
- It allows you to access the item that the pointer points to.
```c++
int x = 25;
int *intptr = &x;
cout << *intptr << endl // *intptr prints 25.
```

```c++
int main(){
	int x = 25;
	int *ptr = nullptr; // pointer variable, can point to an int

	ptr = &x; // stores the address of x in ptr
	cout << "The value in x is " << x << endl; 
	cout << "x is " << *pt* << endl;
	return 0;
}
```