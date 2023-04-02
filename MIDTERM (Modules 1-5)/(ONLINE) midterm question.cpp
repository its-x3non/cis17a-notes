#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class PaymentType {

public:
    string type;
    virtual double getPaymentAmount() = 0;
    string getType() {
        return type;
    }

};

class HourlyPayment : public PaymentType {
private:
    double hours;
    double rate;
public:
    HourlyPayment(double hours, double rate) : hours(hours), rate(rate) { type = "hourly"; }
    double getPaymentAmount() override {
        return hours * rate;
    }
    // Overload << operator
    friend ostream& operator<<(ostream& os, const HourlyPayment& h) {
        os << "Hourly Payment: " << h.hours << " hours @ " << h.rate << " per hour";
        return os;
    }
};

class SalaryPayment : public PaymentType {
private:
    double salary;
    double bonus;
public:
    SalaryPayment(double salary) : salary(salary) { type = "salary"; }
    double getPaymentAmount() override {
        return salary + bonus;
    }
    // Overload << operator
    friend ostream& operator<<(ostream& os, const SalaryPayment& s) {
        os << "Salary Payment: " << s.salary << " + " << s.bonus << " bonus";
        return os;
    }
};

class Employee {
private:
    string firstName, lastName;
    int phoneNumber;
    string address, city;
    int stateZIP;
    string position, jobTitle;
    PaymentType* paymentType;

public:
    Employee() {}
    Employee(string firstName, string lastName, int phoneNumber, string address, string city, int stateZIP, string position, string jobTitle, PaymentType* paymentType) : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), address(address), city(city), stateZIP(stateZIP), position(position), jobTitle(jobTitle), paymentType(paymentType) {}
    // Employee(string firstName, string lastName = "", int phoneNumber = 0, string address = "", string city = "", int stateZIP = 0, string position = "", string jobTitle = "", PaymentType *paymentType = NULL) : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), address(address), city(city), stateZIP(stateZIP), position(position), jobTitle(jobTitle), paymentType(paymentType) {}

    // Setters
    void setFirstName(string firstName) 
    { this->firstName = firstName; }

    void setLastName(string lastName) 
    { this->lastName = lastName; }

    void setPhoneNumber(int phoneNumber) 
    { this->phoneNumber = phoneNumber; }

    void setAddress(string address)
    { this->address = address; }

    void setCity(string city) 
    { this->city = city; }

    void setStateZIP(int stateZIP) 
    { this->stateZIP = stateZIP; }

    void setPosition(string position)
    { this->position = position; }

    void setJobTitle(string jobTitle)
    { this->jobTitle = jobTitle; }

    void setPaymentType(PaymentType* paymentType) 
    { this->paymentType = paymentType; }

    // Getters
    string getFirstName() 
    { return firstName; }

    string getLastName()
    { return lastName; }

    int getPhoneNumber()
    { return phoneNumber; }

    string getAddress()
    { return address; }

    string getCity()
    { return city; }

    int getStateZIP()
    { return stateZIP; }

    string getPosition()
    { return position; }

    string getJobTitle()
    { return jobTitle; }

    PaymentType* getPaymentType()
    { return paymentType; }

    // Overload << operator
    friend ostream& operator<<(ostream& os, const Employee& employee) {
        os << "First Name: " << employee.firstName << endl;
        os << "Last Name: " << employee.lastName << endl;
        os << "Phone Number: " << employee.phoneNumber << endl;
        os << "Address: " << employee.address << endl;
        os << "City: " << employee.city << endl;
        os << "State ZIP: " << employee.stateZIP << endl;
        os << "Position: " << employee.position << endl;
        os << "Job Title: " << employee.jobTitle << endl;
        os << "Payment Type: " << employee.paymentType << endl;
        return os;
    }

    //Overload >> operator
    friend istream& operator>>(istream& is, Employee& employee) {
        string payment;
        cout << "Payment Type (hourly,salaried): ";
        is >> payment;
        transform(payment.begin(), payment.end(), payment.begin(), ::tolower); // Covert payment to lower case
        if (payment == "hourly") {
            double hours, rate;
            cout << "Hours: ";
            is >> hours;
            if (hours < 0) {
                cout << "Hours cannot be negative" << endl;
                return is;
            }
            cout << "Rate: ";
            is >> rate;
            if (rate < 0) {
                cout << "Rate cannot be negative" << endl;
                return is;
            }
            employee.paymentType = new HourlyPayment(hours, rate);
        }
        else if (payment == "salaried") {
            double salary;
            cout << "Salary: ";
            is >> salary;
            if (salary < 0) {
                cout << "Salary cannot be negative" << endl;
                return is;
            }
            employee.paymentType = new SalaryPayment(salary);
        }
        else
        {
            cout << "Invalid payment type" << endl;
            return is;
        }
        cout << "First Name: ";
        is >> employee.firstName;
        cout << "Last Name: ";
        is >> employee.lastName;
        cout << "Phone Number: ";
        is >> employee.phoneNumber;
        cout << "Address: ";
        is >> employee.address;
        cout << "City: ";
        is >> employee.city;
        cout << "State ZIP: ";
        is >> employee.stateZIP;
        cout << "Position: ";
        is >> employee.position;
        cout << "Job Title: ";
        is >> employee.jobTitle;
        return is;
    }
};

vector<Employee> employees;

// function prototypes
void printEmployees();
void addEmployee();
void removeEmployee();
void updateEmployeeInfo();
void displaySalaries();
void saveData();
void loadData();

int main()
{
    while (1)
    {
        cout << "0. Print Employees Info" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Remove Employee" << endl;
        cout << "3. Update Employee Information" << endl;
        cout << "4. Display Salaries" << endl;
        cout << "5. Save data to file" << endl;
        cout << "6. Load data from file" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 0:
            printEmployees();
            break;
        case 1:
            addEmployee();
            break;
        case 2:
            removeEmployee();
            break;
        case 3:
            updateEmployeeInfo();
            break;
        case 4:
            displaySalaries();
            break;
        case 5:
            saveData();
            break;
        case 6:
            loadData();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
        cout << "done" << endl << endl;
    }
}

//************
// Functions *
//************

// print out the employees
void printEmployees() {
    for (int i = 0; i < employees.size(); i++) {
        cout << "--------------" << i << "--------------" << endl;
        cout << employees[i] << endl;
    }
}

// add an employee
void addEmployee() {
    Employee employee;
    cout << "Enter Employee Information: " << endl;
    cin >> employee;
    employees.push_back(employee);
}

// remove an employee
void removeEmployee() {
    int index;
    cout << "Enter Employee Index: ";
    cin >> index;
    employees.erase(employees.begin() + index);
}

// update employee info
void updateEmployeeInfo() {
    int index;
    cout << "Enter Employee Index: ";
    cin >> index;
    cout << "Current Employee Information: " << endl;
    cout << employees[index] << endl;
    cout << "Enter Updated Employee Information: " << endl;
    cin >> employees[index];
}

// display salaries for hourly/slaried
void displaySalaries()
{
    cout << "What type of salary would you like to see? (hourly/salaried)" << endl;
    string type;
    cin >> type;
    transform(type.begin(), type.end(), type.begin(), ::tolower); // Covert type to lower case
    int total = 0;

    for (int i = 0; i < employees.size(); i++) {
        if (type == "hourly") {
            if (employees[i].getPaymentType()->getType() == "hourly") {
                cout << "--------------" << i << "--------------" << endl;
                cout << "First Name: " << employees[i].getFirstName() << endl;
                cout << "Last Name: " << employees[i].getLastName() << endl;
                cout << "Payment Amount: " << employees[i].getPaymentType()->getPaymentAmount() << endl;
                total += employees[i].getPaymentType()->getPaymentAmount();
            }
        }
        else if (type == "salaried") {
            if (employees[i].getPaymentType()->getType() == "salaried") {
                cout << "--------------" << i << "--------------" << endl;
                cout << "First Name: " << employees[i].getFirstName() << endl;
                cout << "Last Name: " << employees[i].getLastName() << endl;
                cout << "Payment Amount: " << employees[i].getPaymentType()->getPaymentAmount() << endl;
                total += employees[i].getPaymentType()->getPaymentAmount();
            }
        }

    }

    cout << "Total Payment: " << total << endl;

}

// save data to file
void saveData()
{
    ofstream outFile;
    outFile.open("employees.dat");
    for (int i = 0; i < employees.size(); i++) {
        outFile << employees[i].getFirstName() << endl;
        outFile << employees[i].getLastName() << endl;
        outFile << employees[i].getPhoneNumber() << endl;
        outFile << employees[i].getAddress() << endl;
        outFile << employees[i].getCity() << endl;
        outFile << employees[i].getStateZIP() << endl;
        outFile << employees[i].getPosition() << endl;
        outFile << employees[i].getJobTitle() << endl;
        outFile << employees[i].getPaymentType()->getType() << endl;
    }
    outFile.close();
}

// load data on file
void loadData()
{
    ifstream inFile;
    inFile.open("employees.dat");
    Employee employee;
    while (inFile >> employee) {
        employees.push_back(employee);
        employee = Employee();
    }
    inFile.close();
}