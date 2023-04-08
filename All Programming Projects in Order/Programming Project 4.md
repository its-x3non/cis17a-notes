```c++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// function prototypes
void setEqual(string x);

int main()
{
    // create the variables
    string word;
    string wordArr[50];
    int freq[50];
    int size = 0;

    // initialize array with 0
    for (int i = 0; i < 50; i++)
        freq[i] = 0;

    // open the file
    ifstream importWords;
    importWords.open("words.txt");

    while (importWords >> word)
    {
        bool flagCheck = false;

        //set words equal to each other
        setEqual(word);

        for (int i = 0; i < size; i++)
        {
            if (wordArr[i] == word)
            {
                freq[i]++;
                flagCheck = true;
                break;
            }
        }
        if (!flagCheck)
        {
            wordArr[size] = word;
            freq[size++] = 1;
        }
    }

    //display each word + amount
    for (int i = 0; i < size; i++)
    {
        cout << wordArr[i] << " " << freq[i] << endl;
    }

    system("pause");
    return 0;
}

// FUNCTIONS

// equalize
void setEqual(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        x[i] = tolower(x[i]); 
        x[i] = toupper(x[i]);
    }
}
```