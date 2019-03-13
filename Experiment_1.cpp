#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double premium;
	cout << " Tickets sold in premium: " ;
	cin >> premium;
	cout << 250*premium <<" Dollars" << endl;

	double sideline;
	cout << "Tickets sold in sideline: " ;
	cin >> sideline;
	cout << 100*sideline <<" Dollars" << endl;

	double box;
	cout << "Tickets sold in box: " ;
	cin >> box;
	cout << 50*box <<" Dollars" << endl;

	double genad;
	cout << "Tickets sold in GenAd: ";
	cin >> genad;
	cout << 25*genad <<" Dollars" << endl;
	cout << "Total sale amount:"
		<< 250*box + 100*sideline + 50*premium + 25*genad << " dollars." <<endl;

_getch();
return 0;
}