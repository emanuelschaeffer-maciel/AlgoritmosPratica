#include <iostream>
using namespace std;

int main()
{
	float v1, v2;
	char sinal = '0';
	float resultado;
	
	cout << "Calculadora: ";
	cin >> v1 >> sinal >> v2;
	
	if (sinal == '+'){
	    resultado = v1 + v2;
	};
	if (sinal == '-'){
	    resultado = v1 - v2;
	};
	if (sinal == 'x' || resultado == '*'){
	    resultado = v1 * v2;
	};
	if (sinal == '/'){
	    resultado = v1 / v2;
	};
	
	if (sinal == '0'){
	    cout << "Sinal não reconhecido";
	} else {
	    	cout << v1 << sinal << v2 << "=" << resultado;
	};
	
	


	return 0;
}
