#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char package;
	int hours;
	float due;

	cout << "Please input your selected package: ";
	cin >> package;

	switch (package)
	{
	case 'a':
	case 'A':
	case 'b':
	case 'B':
	case 'c':
	case 'C':
		break;
	default:
		cout << "Package not found!";
		_getch();
		return 0;
	}

	cout << "Please input number of hours consumed: ";
	cin >> hours;

	switch (package)
	{
	case 'a':
	case 'A':
		if (hours <= 10)
			due = 995.00;
		else
			due = (995.00 + ((hours - 10) * 20));
		break;
	case 'b':
	case 'B':
		if (hours <= 20)
			due = 1495.00;
		else
			due = (1495.00 + ((hours - 20) * 10));
		break;
	case 'c':
	case 'C':
		due = 1995.00;
		break;
	}

	cout << "Total amount due: Php" << fixed << setprecision(2) << due;

	_getch();
	return 0;
}