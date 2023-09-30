#include <iostream>
#include <string>
using namespace std;

char readcharacter()
{
	char myCahr;

	cout << "please enter the string?\n";
	cin >> myCahr;

	return myCahr;
}

char invertCharacterCase(char myChar)// gomaa el  sherbini
{
	/*if (myChar == toupper(myChar))
		return tolower(myChar);
	else
		return toupper(myChar);*/

	//return (myChar == toupper(myChar)) ? tolower(myChar) : toupper(myChar);
	return isupper(myChar) ? tolower(myChar) : toupper(myChar);
}


int main()
{
	char ch;

	ch = readcharacter();

	cout << invertCharacterCase(ch) << endl;



	system("pause>0");

	return main();

}