#Module2 #VideoNotes<br />
# (4) Pointer Function Parameters
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.
# [9.7 - Pointers as Function Parameters](../Pearson%20Notes/9.7%20-%20Pointers%20as%20Function%20Parameters.md)
## Pointers as Function Parameters
- A pointer can be a parameter
- Works like reference variable to allow change to argument from within function
- Requires:
	1) asterisks **\*** on parameter in prototype and heading.
	   `void getNum (int *ptr); // ptr is pointer to an int`
	2)  asterisks **\*** in body to dereference the pointer
	   `cin >> *ptr;`
	3) address as argument to the function
	   `getNum(&num); // pass address of num to getNum`

### Example
```c++
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int num1 = 2, num2 = -3;
swap(&num1, &num2)
```

## Pointers to Constants
### (1 of 3)
- If we want to store the address of a constant in a pointer, then we need to store it in a pointer-to-const.

### (2 of 3)
- Example:
```c++
const int SIZE = 6;
const double payRates[SIZE] = {18.66, 17.45, 12.85
							   14.97,10.35, 18.89};
```
- In this code, `payRates` is an array of constant doubles.

### (3 of 3)
- To pass `payRates` to a function:
```c++
void displayPayRates(const duoble *rates, int size)
{
	for(int count = 0; count < size; count++)
	{
		cout << "Pay rate for employee " << (count + 1)
			 << " is $" << *(rates + count) << endl;
	}
}
```
The parameter, rates, is a pointer to `const double`.

## Declaration of a Pointer to Constant
`const double *rates`
- `const double`  is what `rates` points to.
- The asterisk indicates that `rates` is a pointer.

## Constant Pointers
### (1 of 2)
- A constant pointer is a pointer that is initialized with an address, and cannot point to anything else.
- Example:
```c++
int value = 22;
int * const ptr = &value;
```

### (2 of 2)
`int * const ptr`
- `int` is what `ptr` points to.
- `* const` indicates that `ptr` is a constant pointer.

## Constant Pointers to Constants
### (1 of 2)
- A constant pointer to a constant is:
	- A pointer that points to a constant
	- A pointer that cannot point to anything except what it is pointing to.
- Example:
```c++
int value = 22;
const int * const ptr = &value;
```

### (2 of 2)
`const int * const ptr`
- `const int` is what `ptr` point to.
- `* const` indicates that `ptr` is a constant pointer.