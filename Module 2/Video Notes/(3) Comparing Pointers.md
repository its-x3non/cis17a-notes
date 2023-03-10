#Module2 #VideoNotes
# (3) Comparing Pointers
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on the title to go there.
# [9.6 - Comparing Pointers](../Pearson%20Notes/9.6%20-%20Comparing%20Pointers.md)
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
