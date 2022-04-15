/******************************************************************************

created by @AhmetKara
GitHub: https://github.com/ahmetQara

*******************************************************************************/

// C++ implementation of the approach
#include <iostream>
using namespace std;

string getString(char x)
{
	// string class has a constructor that allows us to specify size of string as first parameter and character to be filled in given size as second parameter.
	string s(1, x);
	return s;
}

// Function that returns true if the given strings contain same characters in same order

bool checkSequence(string s1, string s2)
{
	// Get the first character of both strings
	string a = getString(s1.at(0));
	string b = getString(s2.at(0));
	
	int count = 0;

	for (int i = 0; i < s2.length(); i++)
	{
	    if (s2.at(i) == s1.at(count)) 
	    {   
	        count++;
	    }
	    
	    if (count == s1.length())
    	 {
             return true;
         }
	
    }
	return false;
}


// Driver code
int main()
{
	string s1 = "1234", s2 = "365a1bcde2 bde345";

	if (checkSequence(s1, s2))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
