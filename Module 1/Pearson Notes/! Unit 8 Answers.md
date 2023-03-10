## Quiz 8-1
### Question 1
```c++
isAMember = false;
for(k = 0; k < nMembers; k++)
{
    if(currentMembers[k] == memberID)
        {
            isAMember = true;
        }
}
```

#### [Next Section (8.2)](8.2%20Focus%20on%20Problem%20Solving%20and%20Program%20Design.md)

## Quiz 8-3
### Question 1
```c++
bool isSorted(int a[], int n, bool status){
    bool flag = true;
    if(status == true){
        for (int i=0; i<n-1; i++)
            if (a[i] > a[i+1])
                flag = false;
    }else{
        for (int i=n-1; i > 0; i--)
            if (a[i] > a[i-1])
                flag = false;
    }
    return flag;
}
```

#### [Next Section (8.4)](8.4%20Focus%20on%20Problem%20Solving%20and%20Program%20Design.md)

# Programming Project
```c++
#include <iostream>
#include <string>
using namespace std;

// function prototypes
int searchList(int list[], int size, int value);


int main() {
    const int SIZE = 10; // sets lotto num size
    int lottoNums[SIZE] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 }; // declare array
	int winningNums; // have user type in winning numbers
	int search; // holds the search results

	// Ask user to enter a five-digit number
	cout << "Enter this week's 5-digit winning lottery number:";
	cin >> winningNums;

	// Search the array for WinNums
	search = searchList(lottoNums, SIZE, winningNums);

	// Report whether or not one of the tickets is a winner this week.
	if (search == -1)
		cout << "You did not win this week.";
	else
	{
		cout << "You have a winning ticket."
			<< lottoNums[search] << endl;
	}

    system("pause");
    return 0;
}

// functions
int searchList(int list[], int size, int value)
{
	int index = 0;			// Used as a subscript to search array
	int position = -1;		// Used to record position of search value
	bool found = false;		// Flag to indecate if the value was found

	while (index < size && !found)
	{
		if (list[index] == value)	// If the value is found
		{
			position = index;		// Record the value's subscript
			found = true;			// Set flag
		}
		index++;					// Go to next element
	}
	return position;				// Return the position, or -1
}
```

#### [Next Section (Go to Next Chapter)](../../Module%202/Pearson%20Notes/9.1%20-%20Getting%20the%20Address%20of%20a%20Variable.md) 