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
	
	cout << "Valor da variável i: " << i << endl;
	cout << "Tamanho da variável i: " << sizeof(i) << endl;
	cout << "Endereço da variável i: " << pi << endl;
	
	cout << "Valor da variável pi: " << pi << endl;
	cout << "Tamanho da variável pi: " << sizeof(pi) << endl;
	cout << "Endereço da variável pi: " << &pi << endl;

    cout << "Valor da variável d: " << d << endl;
	cout << "Tamanho da variável d: " << sizeof(d) << endl;
	cout << "Endereço da variável d: " << pd << endl;
	
	cout << "Valor da variável pd: " << pd << endl;
	cout << "Tamanho da variável pd: " << sizeof(pd) << endl;
	cout << "Endereço da variável pd: " << &pd << endl;

	
    *pi = 500; 	
	cout << "Valor da variável i: " << i << endl;
	cout << "Tamanho da variável i: " << sizeof(i) << endl;
	cout << "Endereço da variável i: " << pi << endl;
	
	return 0;
}