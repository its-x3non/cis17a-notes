## Quiz 12.1
### Question 1
```c++
("yearsummary.txt", ios::app);
```
I fucking hate how they word these god damn problems bruh

### Question 2
```c++
output.open("yearsummary.txt", ios::out | ios::trunc);
```
Dude I swear to god bruh

#### [Next Section (12.2)](12.2%20-%20File%20Output%20Formatting.md)

## Quiz 12.5
### Question 1
```c++
void fscopy(fstream &fsin, fstream &fsout)
{
    string s;
    getline(fsin, s, '\n');
    while (!fsin.fail( ) )
    {
        fsout << s << endl;
        getline(fsin, s, '\n');
    }
}
```

#### [Next Section (12.6)](12.6%20-%20Focus%20on%20Software%20Engineering%20-%20Working%20with%20Multiple%20Files.md)
# Programming Project
FINALLY I FINISHED THIS PROGRAMMING PROJECT <br />
![I used to pray for times like these](../../unimportant%20pngs/funny%20meme%201.jpg)
## The answer is down here
```c++
#include <iostream>
#include <fstream>

using namespace std;

// function prototype
void fileError(ifstream &file);

int main()
{
	// declare variables
	int x, i = 0;
	char ch;

	// files
	ifstream posFile("pos.txt");

	// if unable to find file
	fileError(posFile);

	// read the pos.txt file
	while (posFile >> x)
	{
		// if any num is greater than or equal to 0
		if (x >= 0)
		{
			// open chars.txt 
			ifstream charsFile("chars.txt");
			fileError(charsFile);

			// and read the file
			while (charsFile >> ch)
			{
				// if both nums are equal
				if (i == x)
				{
					cout << ch << endl; // output char
				}
				// and increase i
				i++;
			}
			// close chars.txt
			charsFile.close();
			i = 0;
		}

	}

	// ending everything else
	posFile.close();
	system("pause");
	return 0;
}

// file error message if cannot find
void fileError(ifstream &file)
{
	if (!file)
	{
		cout << "Error: Couldn't find file!" << endl;
		exit;
	}
}
```

#### [Next Section (Go to Next Chapter)](../../Module%206/Pearson%20Notes/13.1%20-%20Procedural%20and%20Object-Oriented%20Programming.md)
