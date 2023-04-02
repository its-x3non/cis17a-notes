## Quiz 14.1
### Question 1
```c++
class Counter
{
    private:
        int counter;
        int limit;
        static int nCounters;
    public:
        Counter(int c, int l)
        {
            counter = c;
            limit = l;
            nCounters++;
        }
        
    void increment()
    { 
        if (counter < limit)
            counter++;
    }
    
    void decrement()
    {
        if (counter > 0)
            counter--;
    }
    
    int getValue()
    { return counter; }
    
    static int getNCounters()
    { return nCounters; }
};

int Counter::nCounters = 0;
```

#### [Next Section (14.2)](14.2%20-%20Friends%20of%20Classes.md)

## Quiz 14.2
### Question 1
```c++
class Window
{
    private:
        int width;
        int height;
    public:
        Window(int w, int h)
        { width = w;
          height = h; }
          
        friend bool areSameSize(Window a, Window b)
        {
            if((a.height == b.height) && (a.width == b.width))
                return true;
            else
                return false;
        }
};

```

#### [Next Section (14.3)](14.3%20-%20Memberwise%20Assignment.md)

## Quiz 14.4
### Question 1
```c++
GraphicProgram(const GraphicProgram &a)
{ executableName=a.executableName;
  windowPtr=a.windowPtr->clone(); }
```

####  [Next Section (14.5)](14.5%20-%20Operator%20Overloading.md)

## Quiz 14.5
### Question 1
```c++
friend istream &operator >> (istream & ins, Window & obj)
{
    int w, h;
    
    ins >> w;
    ins >> h;
    obj.height = h;
    obj.width = w;
    
    return ins;
}
```

### Question 2
```c++
friend ostream &operator << (ostream & out, const Window & obj)
{
 out << "a (" << obj.width << " x " << obj.height << ") window";
 return out;
}
```

# Programming Project
fuck you pearson i hate you
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