## Quiz 9-1
### Question 1
```c++
&diff
```

#### [Next Section (9.1)](9.2%20-%20Pointer%20Variables.md)

## Quiz 9-2
### Question 1
```c++
int *ip;
```

### Question 2
```c++
double *dp;
```

### Question 3
```c++
counterPointer = &counter;
```

### Question 4
```c++
*strikeCounter = 27;
```

### Question 5
```c++
*strikeCounter += 22;
```

#### [Next Section (9.2)](9.3%20-%20The%20Relationship%20Between%20Arrays%20and%20Pointers.md)

## Quiz 9-3
### Question 1
```c++
ip = &enrollment[0];
```

### Question 2
```c++
ip = &enrollment[19];
```

### Question 3
```c++
ip = &enrollment[section];
```

#### [Next Section (9.4)](9.4%20-%20Pointer%20Arithmetic.md)

## Quiz 9-4
### Question 1
```c++
*ip +1
```

### Question 2
```c++
ip++;
```

### Question 3
```c++
*ip + *(ip + 1) + *(ip + 2)
```

### Question 4
```c++
jp = ip + 5;
```

#### [Next Section (9.5)](9.5%20-%20Initializing%20Pointers.md)

## Quiz 9-7
### Question 1
```c++
zeroIt(&x);
```

### Question 2
```c++
void zeroIt(int *x);
```

### Question 3
```c++
void zeroIt(int *x)
{
	*x = 0;
}
```

## Quiz 9-8
### Question 1
```c++
new int
```

### Question 2
```c++
ip = new int;
*ip = 27;
```

### Question 3
```c++
new int[100]
```

### Question 4
```c++
arr2 = new int[20];
for(int i = 0; i < 10; i++)
	arr2[i] = arr1[i];

for(int k = 10; k < 20; k++)
	arr2[k] = 0;
```

#### [Next Section (9.9)](9.9%20-%20Returning%20Pointers%20from%20Functions.md)

# Programming Project
```c++
#include <fstream>
#include <iostream>
using namespace std;

int *doubleArr(int arr[], const int SIZE)
{
	const int NEW_SIZE = SIZE * 2;
	int *newArr = new int[NEW_SIZE];

	for (int i = 0; i < NEW_SIZE; i++)
	{
		if (i >= SIZE)
			*(newArr + i) = 0;
		else
			*(newArr + i) = arr[i];
	}
	return newArr;
}

int main()
{
	int N = 0;
	cin >> N;
	
	if (N < 0 || N > 50)
		return -1;
	
	int * myarray = new int[N];
	
	ifstream ifile("data");
	
	for (int i =0; i < N; i++)
	{
		ifile >> myarray[i];
	}
	
	ifile.close();
	
	int* newArr = doubleArr(myarray, N);
	
	for (int i = 0; i < N * 2; i++)
	{
	    cout << newArr[i] << endl;	
	}
	
	delete[] newArr;
	delete[] myarray;
} 
```

#### [Next Section (Go to Next Chapter)](../../Module%203/Pearson%20Notes/10.1%20-%20Character%20Testing.md)