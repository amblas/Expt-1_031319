#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std; 

int main ()
{
	double m;
	double d;
	double v;

	cout << "Enter mass in grams and density in grams per cubic centimeters... " << endl;
	cin >> m >> d;
	cout << "Volume of Object = " << setprecision(2) << fixed << (m / d) << endl;
	_getch();
	return 0;
}