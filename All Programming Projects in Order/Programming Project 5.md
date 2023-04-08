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

# One While Loop (Thanks to Josephc)
Replace the main function
```c++
int main()
{
	// declare variables
	int x, i = 0;
	char ch;

	// files
	ifstream posFile("pos.txt");
	ifstream charsFile("chars.txt");

	// if unable to find file
	fileError(posFile);
	fileError(charsFile);

	charsFile.seekg(0L, ios::end);
	i = charsFile.tellg();
	while (posFile >> x)
	{
		if (!(x >= i || x < 0))
		{
			charsFile.seekg(x, ios::beg);
			charsFile.get(ch);
			cout << ch << endl;
		}
	}

	// ending everything else
	posFile.close();
	charsFile.close();
	system("pause");
	return 0;
}
```