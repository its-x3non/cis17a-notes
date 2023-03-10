## Quiz 10-1
### Question 1
```c++
while(cin >> c)
{

}
```

#### [Next Section (10.2)](10.2%20-%20Character%20Case%20Conversion.md)

## Quiz 10-3
### Question 1
```c++
const int SIZE = 50;
char line[SIZE];
cin.getline(line,SIZE);
```

### Question 2
```c++
const int SIZE = 9;
char ssn[SIZE];
for(int i = 0; i < SIZE; i++)
{
    cin >> ssn;
}
```

### Question 3
```c++
char stooges[3][6] = {"moe", "larry", "curly"};
```

#### [Next Section](10.4%20-%20Library%20Functions%20for%20Working%20with%20C-Strings.md)

## Quiz 10-4
### Question 1
```c++
s == "end"
```
Yes I'm serious that is the answer

### Question 2
I think you got this one. It should be self-explanatory.

### Question 3
```c++
strcmp(s2,s1) < 0
```

#### [Next Section](10.5%20-%20StringNumeric%20Conversion%20Functions.md)

## Quiz 10-7
### Question 1
```c++
name[0]
```
Yes I'm actually deadass, this is the ANSWER bruh

### Question 2
```c++
name[name.length()-1]
```

### Question 3
```c++
word.substr(0,3)
```

### Question 4
```c++
s.substr(2,8)
```

#### [Next Section](10.8%20-%20Focus%20on%20Problem%20Solving%20and%20Program%20Design%20-%20A%20Case%20Study.md)

# Programming Project
```C++
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

#### [Next Section (Go to Next Chapter)](../../Module%204/Pearson%20Notes/11.1%20-%20Abstract%20Data%20Types.md)