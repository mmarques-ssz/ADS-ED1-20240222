#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int i; // x00000000000000000000000000000000
	double d;
	
	int *pi;
	double *pd;
	
	i = 100;
	d = 200.5;
	
	pi = &i;
	pd = &d;
	
	cout << "Valor da vari�vel i: " << i << endl;
	cout << "Tamanho da vari�vel i: " << sizeof(i) << endl;
	cout << "Endere�o da vari�vel i: " << pi << endl;
	
	cout << "Valor da vari�vel pi: " << pi << endl;
	cout << "Tamanho da vari�vel pi: " << sizeof(pi) << endl;
	cout << "Endere�o da vari�vel pi: " << &pi << endl;

    cout << "Valor da vari�vel d: " << d << endl;
	cout << "Tamanho da vari�vel d: " << sizeof(d) << endl;
	cout << "Endere�o da vari�vel d: " << pd << endl;
	
	cout << "Valor da vari�vel pd: " << pd << endl;
	cout << "Tamanho da vari�vel pd: " << sizeof(pd) << endl;
	cout << "Endere�o da vari�vel pd: " << &pd << endl;

	
    *pi = 500; 	
	cout << "Valor da vari�vel i: " << i << endl;
	cout << "Tamanho da vari�vel i: " << sizeof(i) << endl;
	cout << "Endere�o da vari�vel i: " << pi << endl;
	
	return 0;
}