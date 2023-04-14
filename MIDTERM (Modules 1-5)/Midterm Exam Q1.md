# Problem #1: Multipurpose Payroll
Write a program that calculates pay for either an hourly paid worker or a salaried worker. Hourly paid workers are paid their hourly pay rate times the number of hours worked. Salaried workers are paid their regular salary plus any bonus they may have earned. The program should declare two structures for the following data:
-   Hourly Paid:
	-   HoursWorked
	-   HourlyRate
-   Salaried:
	-   Salary
	-   Bonus

The program should also declare a union with two members. Each member should be a structure variable: one for the hourly paid worker and another for the salaried worker.

The program should ask the user whether he or she is calculating the pay for an hourly paid worker or a salaried worker. Regardless of which the user selects, the appropriate members of the union will be used to store the data that will be used to calculate the pay.

Input Validation: Do not accept negative numbers. Do not accept values greater than 80 for HoursWorked.

# Program:
```c++
#include <iostream>
#include <iomanip>
using namespace std;

// struct for hourly paid works
struct Hourly 
{
	double hoursWorked;		// holds num hours of work
	double hourlyRate;		// holds hourly rate of worker
};

// struct for the salaried workers
struct Salaried
{
	double salary;
	double bonus;
};

// union for workers
union Worker
{
	Hourly hrWorker;
	Salaried salariedWorker;
};

// function prototypes
void choiceError();
void byebyeMessage();
void displayHrsWorkedPrompt();
void displayRatePrompt();
void displaySalaryPrompt();
void displayBonusPrompt();
void negativePrompt();
void invalidNumPrompt();
void displayMenu();
char RepeatPrompt(char& ans);

void storeHourlyInfo(Worker& h);
void storeSalaryInfo(Worker& s);
double getHourlyPaidWage(const Worker& H);
double getSalaryPaidWage(const Worker& S);


// main
int main()
{
	Worker data;
	int choice;
	char ans = 'Y';
	bool reuse = true;

	// loop
	while (reuse)
	{
		system("cls");
		displayMenu();
		cout << "Enter Here: ";

		// if not number
		while (!(cin >> choice))
		{
			choiceError();
			cout << endl;

			displayMenu();
			cout << "Enter Here: ";
		}

		// if not an option
		while (choice < 0 || choice > 2)
		{
			choiceError();

			cout << endl;
			displayMenu();
			cout << "Enter Here: ";
			cin >> choice;
		}

		// switch case moment
		switch (choice)
		{
		// quit program
		case 0:
			byebyeMessage();
			return 0;

		// hourly worker
		case 1:
			storeHourlyInfo(data);
			system("cls");

			cout << "Hourly Worker Info:" << endl;
			cout << "=================================" << endl;
			cout << "Hours Worked: " << data.hrWorker.hoursWorked << endl;
			cout << "Hourly Rate: $" << data.hrWorker.hourlyRate << endl;
			cout << "---------------------------------" << endl;
			cout << "The estimated wage is: $";
			cout << fixed << setprecision(2) << getHourlyPaidWage(data) << endl;
			cout << "=================================" << endl;
			break;

		// salary worker
		case 2:
			storeSalaryInfo(data);
			system("cls");

			cout << "Salary Worker Info:" << endl;
			cout << "=================================" << endl;
			cout << "Salary: $" << data.salariedWorker.salary << endl;
			cout << "Bonus: $" << data.salariedWorker.bonus << endl;
			cout << "---------------------------------" << endl;
			cout << "The estimated wage is: $";
			cout << fixed << setprecision(2) << getSalaryPaidWage(data) << endl;
			cout << "=================================" << endl;
			break;
		}

		// ask user if they want to reuse
		RepeatPrompt(ans);
		
		if (ans == 'N' || ans == 'n')
			reuse = false;
		else if (ans == 'Y' || ans == 'y')
			reuse = true;
	}

	byebyeMessage();
	return 0;
}

//******************************************//
//				   Functions				//
//******************************************//

// =============== //
// error message 1 //
// =============== //
void choiceError()
{
	cin.clear();
	cin.ignore(100, '\n');
	system("cls");
	cout << "Please Enter a Valid Option!" << endl;
}
// ************************************************************* //

// =============== //
// closing message //
// =============== //
void byebyeMessage()
{
	cout << endl;
	cout << "Thank you for using this program :)" << endl;
	system("pause");
}
// ************************************************************* //

// ========================== //
// hours worker worked prompt //
// ========================== //
void displayHrsWorkedPrompt()
{
	cout << "Please enter the Hours Worked." << endl;
	cout << "Maximum is 80 hours." << endl;
	cout << "Hours Worked: ";
}
// ************************************************************* //

// ======================== //
// hours worker rate prompt //
// ======================== //
void displayRatePrompt()
{
	cout << "Please enter the Hourly Rate." << endl;
	cout << "Has to be greater than 0." << endl;
	cout << "Hourly Rate: $";
}
// ************************************************************* //

// =========================== //
// salary worker salary prompt //
// =========================== //
void displaySalaryPrompt()
{
	cout << "Please enter the Salary." << endl;
	cout << "Has to be greater than 0." << endl;
	cout << "Salary: $";
}
// ************************************************************* //

// ========================== //
// salary worker bonus prompt //
// ========================== //
void displayBonusPrompt()
{
	cout << "Please enter the Bonus." << endl;
	cout << "Has to be greater than 0." << endl;
	cout << "Bonus: $";
}
// ************************************************************* //

// =============== //
// negative prompt //
// =============== //
void negativePrompt()
{
	cin.clear();
	cin.ignore(100, '\n');
	system("cls");
	cout << "Number should not be negative." << endl;
	cout << endl;
}

// ************************************************************* //

// ================== //
// invalid num prompt //
// ================== //
void invalidNumPrompt()
{
	cin.clear();
	cin.ignore(100, '\n');
	system("cls");
	cout << "Please enter a valid number." << endl;
	cout << endl;
}

// ************************************************************* //

// ======================== //
// store hourly worker info //
// ======================== //
void storeHourlyInfo(Worker& h)
{
	system("cls");

	// hours worked
	displayHrsWorkedPrompt();

	// if not number
	while (!(cin >> h.hrWorker.hoursWorked))
	{
		invalidNumPrompt();
		
		displayHrsWorkedPrompt();
	}

	// if hours worked is less than 0 or greater than 80
	while (h.hrWorker.hoursWorked < 0 || h.hrWorker.hoursWorked > 80)
	{
		if (h.hrWorker.hoursWorked < 0)
		{
			negativePrompt();
			displayHrsWorkedPrompt();
			cin >> h.hrWorker.hoursWorked;
		}

		if (h.hrWorker.hoursWorked > 80)
		{
			cin.clear();
			cin.ignore(100, '\n');
			system("cls");
			cout << "Hours worked have to be less than 80." << endl;
			cout << endl;

			displayHrsWorkedPrompt();
			cin >> h.hrWorker.hoursWorked;
		}
	}

	// hourly rate
	cout << endl;
	displayRatePrompt();

	// if not number
	while (!(cin >> h.hrWorker.hourlyRate))
	{
		invalidNumPrompt();
		displayRatePrompt();
	}

	// if hourly rate is negative
	while (h.hrWorker.hourlyRate < 0.0)
	{
		if (h.hrWorker.hourlyRate < 0.0)
		{
			negativePrompt();
			displayRatePrompt();
			cin >> h.hrWorker.hourlyRate;
		}
	}
}
// ************************************************************* //

// ======================== //
// get salaried worker info //
// ======================== //
void storeSalaryInfo(Worker& s)
{
	system("cls");

	// hours worked
	displaySalaryPrompt();

	// if not number
	while (!(cin >> s.salariedWorker.salary))
	{
		invalidNumPrompt();
		displaySalaryPrompt();
	}

	// if salary is negative
	while (s.salariedWorker.salary < 0.0)
	{
		if (s.salariedWorker.salary < 0.0)
		{
			negativePrompt();
			displaySalaryPrompt();
			cin >> s.salariedWorker.salary;
		}
	}

	// bonus
	cout << endl;
	displayBonusPrompt();

	// if not number
	while (!(cin >> s.salariedWorker.bonus))
	{
		invalidNumPrompt();
		displayBonusPrompt();
	}

	// if bonus is negative
	while (s.salariedWorker.bonus < 0.0)
	{
		if(s.salariedWorker.bonus < 0.0)
		{
			negativePrompt();
			displayBonusPrompt();
			cin >> s.salariedWorker.bonus;
		}
	}
}
// ************************************************************* //

// ====================== //
// get hourly worker wage //
// ====================== //
double getHourlyPaidWage(const Worker& H)
{
	return(H.hrWorker.hourlyRate * H.hrWorker.hoursWorked);
}
// ************************************************************* //

// ====================== //
// get salary worker wage //
// ====================== //
double getSalaryPaidWage(const Worker& S)
{
	return(S.salariedWorker.salary * S.salariedWorker.bonus);
}
// ************************************************************* //

// ============ //
// display menu //
// ============ //
void displayMenu()
{
	cout << "Please enter the type of worker you" << endl;
	cout << "want to input wage information about." << endl;
	cout << "======================================" << endl;
	cout << "[1] Hourly Paid Worker" << endl;
	cout << "[2] Salaried Worker" << endl;
	cout << "[0] Quit" << endl;
}
// ************************************************************* //

// ============= //
// repeat prompt //
// ============= //
char RepeatPrompt(char &ans)
{
	cout << "Use program again? [Y/N]: ";
	cin >> ans;

	cout << endl;
	return ans;
}
```
