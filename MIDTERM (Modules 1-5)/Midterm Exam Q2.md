
Write a program that uses a structure to store the following inventory data in a file:
-   Item Description
-   Quantity on Hand
-   Wholesale Cost
-   Retail Cost
-   Date Added to Inventory

The program should have a menu that allows the user to perform the following tasks:
-   Add new records to the file.
-   Display any record in the file.
-   Change any record in the file.

Input Validation: The program should not accept quantities, or wholesale or retail costs, less than 0. The program should not accept dates that the programmer determines are unreasonable.

## You have to make your own `Inventory.dat` file :3

# Program
```c++
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

struct Inventory
{
	string Desc;			// Item description
	string Date;			// Date added to inventory
	int Qty;				// Quantity on hand
	double WholesaleCost;	// Wholesale cost
	double RetailCost;		// Retail cost
};

// function prototypes
void addRec(Inventory& rec, fstream& File);
void displayRec(Inventory& rec, fstream& File);
void changeRec(Inventory& rec, fstream& File);
long byteNum(int recNum);
void displayError();
void invalidOption();
bool validDate(string date);
void displayMenu();
bool isEmpty(fstream& File);

// main
int main()
{
	Inventory rec;
	int input;
	int viewAgain;
	bool view = true;

	// open file
	fstream File("inventory.dat", ios::out | ios::in | ios::binary);
	if (!File)
	{
		cout << "Error opening file or file does not exist." << endl;
		std::system("pause");
		std::exit(0);
	}

	std::system("cls");
	displayMenu();
	cout << "Enter Here: ";
	while (!(cin >> input))
	{
		invalidOption();
		cout << "Please enter a number." << endl;

		displayMenu();
	}

	// if not an option
	while (input < 0 || input > 3)
	{
		invalidOption();

		cout << endl;
		displayMenu();
		cout << "Enter Here: ";
		cin >> input;
	}

	// switch moment
	switch (input)
	{
	// quit program
	case 0:
		cout << endl;
		cout << "Thank you for using the program :)" << endl;
		File.close();
		std::system("pause");
		std::exit(0); // return 0 caused an error

	// add records to file
	case 1:
		addRec(rec, File);
		break;

	// display record
	case 2:
	do
	{
		displayRec(rec, File);

		// view another
		cout << "Do you want to view another record?" << endl;
		cout << "[1] Yes\n[2] No" << endl;
		cout << "Enter Here: ";

		// if not num
		while (!(cin >> viewAgain))
			invalidOption();

		// if not valid
		//do
		//{
		//	invalidOption();
		//} while (viewAgain != 1 && viewAgain != 2);

		// view again
		if (viewAgain == 2)
		{
			view = false;
			system("cls");
			cout << endl;
			cout << "Thank you for using the program :)" << endl;
			File.close();
			std::system("pause");
			std::exit(0);
		}
	} while (view);
	break;
	// change record
	case 3:
		changeRec(rec, File);
		cout << endl;
		cout << "Please restart the program to view the change!" << endl;
		break;
	}


	File.close();
	cout << endl;
	cout << "Thank you for using the program :)" << endl;
	std::system("pause");
	std::exit(0);
}

//******************************************//
//				   Functions				//
//******************************************//

// ========== //
// if invalid //
// ========== //
void invalidOption()
{
	cin.clear();
	cin.ignore(100, '\n');
	std::system("cls");
	cout << "Please put a valid option." << endl;
}

// ************************************************************************ //

// ==================== //
// add a record to file //
// ==================== //
void addRec(Inventory& rec, fstream& File)
{
	std::system("cls");
	File.seekp(0L, ios::end);
	cout << "Enter the following inventory information:\n";

	// enter item description
	cout << "Item Description: ";
	cin.ignore();
	getline(cin, rec.Desc);
	cout << endl;

	// enter the date
	do
	{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, rec.Date);

		if (validDate(rec.Date) == 0)
		{
			cout << validDate(rec.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}

	} while (validDate(rec.Date) == 0);
	cout << endl;

	// enter amount/quantity
	do
	{
		cout << "Quantity: ";
		cin >> rec.Qty;
		if (rec.Qty < 0)
			displayError();
	} while (rec.Qty < 0);
	cout << endl;

	// enter wholesale cost
	do
	{
		cout << "Wholesale Cost: $";
		cin >> rec.WholesaleCost;
		if (rec.Qty < 0)
			displayError();
	} while (rec.WholesaleCost < 0);
	cout << endl;

	// enter retail cost
	do
	{
		cout << "Retail Cost: $";
		cin >> rec.RetailCost;
		if (rec.RetailCost < 0)
			displayError();
	} while (rec.RetailCost < 0);

	File.write(reinterpret_cast<char*>(&rec), sizeof(rec));
}
// ************************************************************************ //

// ========================== //
// display the record in file //
// ========================== //
void displayRec(Inventory& rec, fstream& File)
{
	// if no record
	if (isEmpty(File))
	{
		std::system("cls");
		cout << "There is nothing you can view." << endl;
		return;
	}

	std::system("cls");
	int recNum;

	cout << "Enter the Record Number: ";
	while (!(cin >> recNum))
	{
		invalidOption();
	}

	// default to 1
	if (recNum < 1)
		recNum = 1;

	recNum--;
	File.seekg(byteNum(recNum), ios::beg);
	File.read(reinterpret_cast<char*>(&rec), sizeof(rec));

	cout << endl;
	cout << "Record Number: #" << (recNum + 1) << endl;

	cout << "Item Description: ";
	cout << rec.Desc << endl;

	cout << "Date: ";
	cout << rec.Date << endl;

	cout << "Quantity: $";
	cout << fixed << showpoint << setprecision(2);
	cout << rec.Qty << endl;

	cout << "Wholesale Cost: $";
	cout << rec.WholesaleCost << endl;

	cout << "Retail Cost: $";
	cout << rec.RetailCost << endl;
	cout << endl;
}
// ************************************************************************ //

// =========================== //
// change (any) record in file //
// =========================== //
void changeRec(Inventory& rec, fstream& File)
{
	// if no record
	if (isEmpty(File))
	{
		std::system("cls");
		cout << "There is nothing you can change/edit." << endl;
		return;
	}

	std::system("cls");
	int recNum;

	cout << "Enter the Record Number: ";
	while (!(cin >> recNum))
	{
		invalidOption();
	}

	// default to 1
	if (recNum < 1)
		recNum = 1;

	// if record does not exist
	// there used to be code here but i couldnt figure
	// out how to do it

	recNum--;
	File.seekg(byteNum(recNum), ios::beg);
	File.read(reinterpret_cast<char*>(&rec), sizeof(rec));
	cout << "Enter the following inventory information:\n";

	// change item description
	cout << "Item Description: ";
	cin.ignore();
	getline(cin, rec.Desc);
	cout << endl;

	// change date
	do
	{
		cout << "Date in the format MM/DD/YYYY: ";
		cin.ignore();
		getline(cin, rec.Date);
		if (!validDate(rec.Date))
		{
			cout << validDate(rec.Date) << endl;
			cout << "Error! Invalid date format.\n";
		}
	} while (!validDate(rec.Date));
	cout << endl;

	// change amount / quantity
	do
	{
		cout << "Quantity: ";
		cin >> rec.Qty;
		if (rec.Qty < 0)
			displayError();
	} while (rec.Qty < 0);
	cout << endl;

	// change wholesale cost
	do
	{
		cout << "Wholesale Cost: $";
		cin >> rec.WholesaleCost;
		if (rec.Qty < 0)
			displayError();
	} while (rec.WholesaleCost < 0);
	cout << endl;

	// change retail cost
	do
	{
		cout << "Retail Cost: $";
		cin >> rec.RetailCost;
		if (rec.RetailCost < 0)
			displayError();
	} while (rec.RetailCost < 0);
	cout << endl;

	File.seekp(byteNum(recNum), ios::beg);
	File.write(reinterpret_cast<char*>(&rec), sizeof(rec));
}
// ************************************************************************ //

// ================================================= //
// returns the byte number in the file of the record //
// ================================================= //
long byteNum(int recNum)
{
	return sizeof(Inventory) * recNum;
}
// ************************************************************************ //

// ================= //
// display error msg //
// ================= //
void displayError()
{
	cout << "Error! number must be greater than 0." << endl;
}
// ************************************************************************ //

// ====================== //
// check if date is valid //
// ====================== //
bool validDate(string date)
{
	// check if date length is valid
	if (date.length() == 9)
		date = "0" + date;
	else if (date.length() != 10)
		return false;

	// read out date
	for (int i = 0; i < date.length(); i++)
	{
		if (i == 2 || i == 5)
		{
			// if date does not have the slash
			if (date[i] != '/')
			{
				return false;
			}
			continue;
		}

		// if date does not have a digit
		if (!isdigit(date[i]))
			return false;
	}
	return true;
}
// ************************************************************************ //

// ============ //
// display menu //
// ============ //
void displayMenu()
{
	cout << "Inventory Program Menu" << endl;
	cout << "====================================================" << endl;
	cout << "Choose one of the following numbers to perform a task:" << endl;
	cout << "[1] Add new records to the file.\n[2] Display any record in the file." << endl;
	cout << "[3] Change any record in the file.\n[0] Quit Program" << endl;
}

// ************************************************************************ //

// ============== //
// check if empty //
// ============== //
bool isEmpty(fstream& File)
{
	return File.peek() == std::fstream::traits_type::eof();
}
```