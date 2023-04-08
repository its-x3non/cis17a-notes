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