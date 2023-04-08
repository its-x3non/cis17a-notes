```c++
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Month
{
private:
	string monthName[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int num; // monthNumber will accept from 1 to 12

public:
	// constructors
	Month()
	{
		num = 0;
	}

	// parameterized constructor
	Month(int num)
	{
		this->num = 0;
	}

	//*******************
	// function setters *
	//*******************
	void setName(string n) // function set month name
	{
		if (n == "January")
			num = 1;
		else if (n == "February")
			num = 2;
		else if (n == "March")
			num = 3;
		else if (n == "April")
			num = 4;
		else if (n == "May")
			num = 5;
		else if (n == "June")
			num = 6;
		else if (n == "July")
			num = 7;
		else if (n == "August")
			num = 8;
		else if (n == "September")
			num = 9;
		else if (n == "October")
			num = 10;
		else if (n == "November")
			num = 11;
		else if (n == "December")
			num = 12;
	}

	void setNum(int num) // function set month num
	{
		this->num = num;
	}

	//*******************
	// function getters *
	//*******************
	int getNum()
	{
		return num;
	}

	string getName()
	{
		if (num >= 1 && num <= 12)
			return monthName[num - 1];
		else
			return "Unknown";
	}

	//***********************
	// overloaded operators *
	//***********************
	Month operator++() // overloaded prefix ++
	{
		Month temp;
		if (num < 12)
			temp.num = ++num;
		else
		{
			num = 1;
			temp.num = num;
		}
		return temp;
	}

	Month operator++(int) // overloaded postfix ++
	{
		Month temp;
		if (num < 12)
			temp.num = num++;
		else
		{
			temp.num = num;
			num = 1;
		}
		return temp;
	}

	Month operator--() // overloaded prefix --
	{
		Month temp;
		if (num > 1)
			temp.num = --num;
		else
		{
			num = 12;
			temp.num = num;
		}
		return temp;
	}

	Month operator--(int) // overloaded postfix --
	{
		Month temp;
		if (num > 1)
			temp.num = num--;
		else
		{
			temp.num = num;
			num = 12;
		}
		return temp;
	}

	// ostream/istream overloaded operators 
	friend ostream& operator <<(ostream&, const Month&);
	friend istream& operator >> (istream&, Month&);
};

//***********************************************
// ostream/istream overloaded operators defined *
//***********************************************
istream& operator>>(istream& in, Month& m)
{
	in >> m.num;
	return in;
}

ostream& operator<<(ostream& out,
	Month& m)
{
	out << m.getName();
	return out;
}

//***********
// main lol *
//***********
int main()
{
	// creating Month object
	Month month;

	// taking input
	cout << "Enter: month number (1-12):";
	cin >> month;

	// displaying next months including current month
	cout << "The next 8 months are: ";
	cout << month;
	for (int i = 1; i <= 7; i++)
	{
		month++;
		cout << ", " << month;
	}
	cout << ".\n";

	// displaying previous 8 months including current month
	cout << "Enter: another month number (1-12):";
	cin >> month;
	cout << "The previous 8 months were: ";
	cout << month;
	for (int i = 1; i <= 7; i++)
	{
		month--;
		cout << ", " << month;
	}
	cout << ".\n";

	system("pause");
	return 0;
}
```