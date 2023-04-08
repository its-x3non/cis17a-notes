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