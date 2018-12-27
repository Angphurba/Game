// ConsoleApplication95.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;


int main()
{
	int g, n, t = 100;
	srand(time(NULL));
	n = rand() % 20 + 0;
	n = rand() % 50 + 0;
	n = rand() % 100 + 0;
	system("cls");

	cout << " WELCOME TO GUESSING NUMBER GAME" << endl;
	cout << " *******************************" << endl;
	cout << "The random number has been generated. It is between 0 and 20, 0 and 50, 0 and 100." << endl;
	system("pause");

	for (int i = 0; i < t; i++)
	{
		cout << "Type a guess and press enter" << endl;
		cout << "Your guess:";
		cin >> g;

		if (g != n)
		{
			if (g >  n)
				cout << "Your guess is too high \n";
			else
				cout << "Your guess is too low \n";
		}

		else
		{
			cout << "Congratulation!! You have found the number." << endl;
			cout << "The random number was: " << n << endl;
			system("pause");
			return 0;
		}

	}

	system("pause");
	return 0;
}

