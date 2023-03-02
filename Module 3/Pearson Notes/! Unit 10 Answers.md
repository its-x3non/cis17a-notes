# Unit 10 Quiz + Test Answers
Only use these if you're actually REALLY struggling

## Quiz 10.1
### Question 1
```c++
while(cin >> c)
{

}
```

## Quiz 10.3
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

## Quiz 10.4
### Question 1
```c++
s == "end"
```
Yes I'm serious that is the answer

### Question 2
I think you got this one. It should be self-explanatory.

### Question 3
```c++

```

## Quiz 10.7
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

# Unit 10 Test
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