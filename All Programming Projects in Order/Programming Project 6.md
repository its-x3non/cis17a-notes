```c++
#ifndef Car_H
#define Car_H

class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	// Constructor
	Car(int yr, string m) 
	{
		yearModel = yr;
		make = m;
		speed = 0;
	}

	// Default Constructor
	Car()
	{
		yearModel = 2022;
		make = "";
		speed = 0;
	}

// setYearModel: 
// Accepts an int argument that is 
// assigned to the yearModel "member" variable.
// The function returns no value.
	void setYearModel(int yr)
	{ yearModel = yr; }
	

// setMake: Accepts a string argument that is 
// assigned to the "make" member variable.
// The function returns no value.
	void setMake(string m)
	{ make = m; }

// setSpeed: Accepts an int argument that is 
// assigned to the "speed" member variable
// The function returns no value.
	void setSpeed(int sp)
	{ speed = sp; }

// getYearModel: Returns the value stored in the yearModel member variable.
	int getYearModel()
	{ return yearModel; }

// getMake: Returns the value stored in the make member variable.
	string getMake()
	{ return make; }

// getSpeed: Returns the value stored in the speed member variable.
	int getSpeed()
	{ return speed; }

// accelerate: Adds 5 to the speed member variable.
// The function returns no value.
	void accelerate()
	{ speed += 5; }

// brake : Subtracts 5 from the speed member variable.
// The function returns no value.
	void brake()
	{ speed -= 5; }
};

#endif
```