```c++
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string lastName, firstName, email, phone;
public:
	Person() // constructor 1
	{
		lastName = "";
		firstName = "";
		email = "";
		phone = "";
	}

	Person(string ln, string fn, string e, string p) // constructor 2
	{
		lastName = ln;
		firstName = fn;
		email = e;
		phone = p;
	}

	// Mutators
	void setLastName(string ln)
	{ lastName = ln; }

	void setFirstName(string fn)
	{ firstName = fn; }

	void setEmail(string e)
	{ email = e; }

	void setPhone(string p)
	{ phone = p; }

	// Accessors
	string getLastName() const
	{ return lastName; }

	string getFirstName() const
	{ return firstName; }

	string getEmail() const
	{ return email; }

	string getPhone() const
	{ return phone; }
};

// customer class
class Customer : public Person
{
protected:
	int customerNumber;
	bool emailList;
public:
	Customer() // constructor 1
	{
		customerNumber = 0;
		emailList = false;
	}

	Customer(string ln, string fn, string e, string p, int cNum, bool list) : Person(ln, fn, e, p) // constructor 2
	{
		customerNumber = cNum;
		emailList = list;
	}

	// Mutators
	void setCustomerNumber(int cNum)
	{ customerNumber = cNum; }

	void setEmailList(bool list)
	{ emailList = list; }

	// Accessors
	int getCustomerNumber() const
	{ return customerNumber; }

	bool getEmailList() const
	{ return emailList; }
};
```