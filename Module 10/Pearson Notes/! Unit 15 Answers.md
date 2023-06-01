## Quiz 15-1
### Question 1
```c++
class CameraPhone : public Phone
{
    private:
        int imageSize;
        int memorySize;
    public:
        CameraPhone(int, int);
        int numPictures();
};

CameraPhone::CameraPhone(int imgSize, int memSize)
{
    imageSize = imgSize;
    memorySize = memSize;
}
int CameraPhone::numPictures()
{ return memorySize/imageSize; }
```

#### [Next Section (15.2)](15.2%20-%20Protected%20Members%20and%20Class%20Access.md)

# Programming Project
This programming project is also fairly easy as I didn't have to make a whole ass program :skull emoji:
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

#### [Next Section (Go to Next Chapter)](../../Module%2012/Pearson%20Notes/16.1%20-%20Exceptions.md)