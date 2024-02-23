#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	cout << fixed;
	
	int i;
	double d;
	
	cout << "Digite valor int: ";
	cin >> i;
	
	cout << "Digite valor double: ";
	cin >> d;
	
	cout << "Valor int   : " << i << endl;
    cout << "Valor double: " << d << endl;
    
	cout << endl;
	
    cout << "Valor int   : " << setw(10) << i << endl;
	cout << "Valor double: " << setw(10) << d << endl;
    
    cout << endl;
	
	cout << "Valor double: " << setprecision(2) << setw(10) << d << endl;
  	cout << "Valor double: " << setprecision(3) << setw(10) << d << endl;
	cout << "Valor double: " << setprecision(4) << setw(10) << d << endl;	

    cout << endl;

	cout << setprecision(5);	
	cout << "Valor double: " << setw(10) << d << endl;
  	cout << "Valor double: " << setw(10) << d << endl;
	cout << "Valor double: " << setprecision(6) << setw(10) << d << endl;	
	
    cout << endl;

	cout << fixed;
	cout << setprecision(5);	
	cout << "Valor double: " << setw(10) << d << endl;
  	cout << "Valor double: " << setw(10) << d << endl;
	cout << "Valor double: " << setprecision(6) << setw(10) << d << endl;	
		
	
	return 0;
}