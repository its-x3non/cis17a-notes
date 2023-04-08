```c++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 50;
    string phoneDirectory[SIZE];
    int size=0;
    int numberEntriesFound;
    string name; // The name to look for

    ifstream inFile;
    inFile.open("phonebook");
    
    // Read File
    while (!inFile.fail()) 
    {
        getline(inFile,phoneDirectory[size]);
        size++;
    }
    inFile.close();

    // Get a name or partial name to search for.
    cout << "Enter a name or partial name to search for: ";
    getline(cin, name);
    
    // Showcase Results
    cout << "\nHere are the results of the search: " << endl;
    numberEntriesFound = 0;

    for (int k = 0; k < size; k++)
    {
        if (phoneDirectory[k].find(name.data(), 0) < phoneDirectory[k].length())
        {
        numberEntriesFound ++;
        cout << phoneDirectory[k] << endl;
        }
    }
    
    // If no matching entries
    if (numberEntriesFound == 0)
        cout << "\nNo Entries were found for " << name;
    return 0;
}
```