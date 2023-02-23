#Module2 #VideoNotes
# 9.6 - Comparing Pointers
## Comparing Pointers
- Relational Operators (<, >=, etc.) can be used to compare addresses in pointers.
- Comparing addresses **in** pointers is not the same as comparing contents **pointed at by** pointers:
```c++
if (ptr1 == ptr2) // compares addresses
if(*ptr1 == *ptr2) // compares contents
```

### Real Time Example:
```c++
int main()
{
	int x = 50;
	int y = 50;
	int z = 75;
	int *ptr1 = nullptr;
	int *ptr2 = nullptr;

	// display contents of x, y, z
	cout << "Here are the values of x, y, and z:\n";
	cout << x << " " << y << " " << z << endl;

	ptr1 = &x;
	ptr2 = &y;

	if(ptr1 == nullptr || ptr2 == nullptr)
	{
		cout << "Error: Pointer not initialized!" << endl;
	}

	cout << "ptr1 ptr2" << ptr1 << " " << ptr2 << endl;
	cout << "*ptr1 *ptr2" << *ptr1 << *ptr2 << endl;

	if(ptr1 == ptr2)
	{
		cout << " == " << endl;
	}
	else
	{
		cout << " != " << endl;
	}
	
}
```
