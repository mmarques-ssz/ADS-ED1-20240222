#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int i;
	double d;
	char c;
	bool b;
	string s;
	
	cout << "Digite valor int: ";
	cin >> i;
	
	cout << "Digite valor double: ";
	cin >> d;
	
	cout << "Digite valor char: ";
	cin >> c;
	
	cout << "Digite valor string: ";
	cin >> s;
	
	b = (i % 2 == 0);
	
	cout << "Valor int: " << i << endl;
    cout << "Valor double: " << d << endl;
	cout << "Valor char: " << c << endl;
    cout << "Valor string: " << s << endl;
    cout << "Tamanho string: " << s.size() << endl;
    cout << "Valor int é par: " << b << endl;
    cout << "Valor int é par: " << (b?"SIM":"NÃO") << endl;
    
	
	return 0;
}