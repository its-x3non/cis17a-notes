## Quiz 13-2
### Question 1
holy fucking shit i hate this
```c++
class Player
{
    private:
        string name;
        int score;
    public:
        void setName(string ab)
            {name = ab;}
        void setScore(int cd) 
            {score = cd;}
        string getName() const
            {return name;}
        int getScore() const
            {return score;}
};
```
#### [Next Section (13.3)](13.3%20-%20Defining%20an%20Instance%20of%20a%20Class.md)

## Quiz 13-3
### Question 1
this question may be the EASIEST one out of all these fucking quizzes
```c++
Calculator calc;
```
#### [Next Section(13.4)](13.4%20-%20Why%20Have%20Private%20Members.md)


## Quiz 13-5
### Question 1
```c++
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    private:
        string name;
        int score;
    public:    
        string getName();
        int getScore();
        void setName(string ab);
        void setScore(int cd);
};

#endif
```

### Question 2
i'm actually surprised i got this first try LMAO
```c++
string Player::getName()
{
    return name;
}

int Player::getScore()
{
    return score;
}

void Player::setName(string ab)
{
    cin >> ab;
    name = ab;
}

void Player::setScore(int cd)
{
    cin >> cd;
    score = cd;
}


```

### Question 3
i accidentally put `winnter` instead of `winner` lol
```c++
class ContestResult
{
    private:
        string winner;
        string secondPlace;
        string thirdPlace;
    public:
        void setWinner(string ab);
        void setSecondPlace(string cd);
        void setThirdPlace(string ef);
        string getWinner();
        string getSecondPlace();
        string getThirdPlace();
};
```

### Question 4
dam
```c++
// sets winners/second place/third place
void ContestResult::setWinner(string ab)
{
    cin >> ab;
    winner = ab;
}

void ContestResult::setSecondPlace(string cd)
{
    cin >> cd;
    secondPlace = cd; 
}

void ContestResult::setThirdPlace(string ef)
{
    cin >> ef;
    thirdPlace = ef;
}

// not void
string ContestResult::getWinner()
{
    return winner;
}

string ContestResult::getSecondPlace()
{
    return secondPlace;
}

string ContestResult::getThirdPlace()
{
    return thirdPlace;
}
```

#### [Next Section (13.6)](13.6%20-%20Inline%20Member%20Functions.md)
## Quiz 13-7
### Question 1
```c++
class Accumulator
{
  private:
    int sum = 0;
  public:
    int getSum()
        { return sum; }
    void add(int a)
    {
        sum += a;
    }
};
```

### Question 2
I FORGOT THE PARANTHESIS ON `getGasLevel` AND WAS WONDERING WHY I WAS GETTING THIS QUESTION WRONG
```c++
class GasTank 
{
  private:
    double amount;
  public:
    GasTank(){
        amount = 0;
    }
    double getGasLevel()
    {
        return amount;
    }
    void addGas(double add)
    { 
        amount += add; 
    }
    void useGas(double sub)
    {
        amount -= sub;
    }
};
```

#### [Next Section (13.8)](13.8%20-%20Passing%20Arguments%20to%20Constructors.md)

## Quiz 13-8
### Question 1
```c++
class Counter
{
private:
	int counter;
public:
	Counter(int x)
	{ counter = x; }
	
	void increment()
	{
	    counter++;
	}
	
	void decrement()
	{
	    counter--;
	}
	
	int getValue()
	{
	    return counter;
	}
};
```

#### [Next Section (13.9)](13.9%20-%20Destructors.md)

## Quiz 13-9
```c++
~Window()
{
    close();
    freeResources();
}
```

####  [Next Section (13.10)](13.10%20-%20Overloading%20Constructors.md)

## Quiz 13-10
### Question 1
```c++
Window(int a, int b, int c, int d) {
  width = a;
  height = b;
  xPos = c;
  yPos = d;
}
Window(int e, int f) {
  width = e;
  height = f;
  xPos = 0;
  yPos = 0;
}
```

#### [Next Section (13.11)](13.11%20-%20Private%20Member%20Functions.md)

## Quiz 13-12
### Question 1
```c++
Window winarr[3]
{ Window(80,20),
  Window(10,10),
  Window(133,40) };

```

### Question 2
There might be an easier and more simple way to do this, but here is what I did:
```c++
if(winarr[0].getWidth() > winarr[1].getWidth() && winarr[0].getWidth() > winarr[2].getWidth())
{
    cout << winarr[0].getWidth();
}
else if(winarr[1].getWidth() > winarr[0].getWidth() && winarr[1].getWidth() > winarr[2].getWidth())
{
    cout << winarr[1].getWidth();
}
else if(winarr[2].getWidth() > winarr[0].getWidth() && winarr[2].getWidth() > winarr[1].getWidth())
{
    cout << winarr[2].getWidth();
}
else if(winarr[0].getWidth() == winarr[0].getWidth() && winarr[1].getWidth() == winarr[1].getWidth())
{
    cout << winarr[2].getWidth();
}
```

#### [Next Section (13.13)](../../../Module%209/Pearson%20Notes/13.13%20-%20Focus%20on%20Problem%20Solving%20and%20Program%20Design.md)

# Programming Project
This shit is actually the easiest programming project we have had yet so far
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

#### [Next Section (Go to Next Chapter)](../../../Module%207/Pearson%20Notes/14.1%20-%20Instance%20and%20Static%20Members.md)