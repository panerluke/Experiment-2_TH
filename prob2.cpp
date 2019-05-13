#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float bill, prevm, currm, unpaid;

	cout << "Please input current month's meter reading of water consumption, in gallons: ";
	cin >> currm;
	cout << "Please input previous month's meter reading of water consumption, in gallons: ";
	cin >> prevm;
	cout << "Please input your unpaid balance: ";
	cin >> unpaid;

	if (unpaid > 0)
		bill = 35.00 + (prevm * 1.10) + (currm * 1.10) + unpaid + 20.00;
	else
		bill = 35.00 + (prevm * 1.10) + (currm * 1.10);

	cout << "Your total bill is: Php" << fixed << setprecision(2) << bill;

	_getch();
	return 0;
}