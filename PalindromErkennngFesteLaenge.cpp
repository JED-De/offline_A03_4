#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	int i;
	bool palindrom = true;
	cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
	cin >> eingabe;

	for (i = 0; i < eingabe.size() / 2; i++)
	{
		if (palindrom == true)
		{
			palindrom = (eingabe.at(i) == eingabe.at((eingabe.size() - i - 1)));
		}
	}

	if (palindrom == true)
	{
		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}

	else
	{
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}
	system("PAUSE");
	return 0;
}