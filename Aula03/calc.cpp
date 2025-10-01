/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float v1, v2;
	char sinal = '0'; // sinal 
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
	if (sinal == '%'){
	    resultado = v1 % v2;
	}
	
	if (sinal == '0'){
	    cout << "Sinal não reconhecido";
	} else {
	    	cout << v1 << sinal << v2 << "=" << resultado;
	};
	
	


	return 0;
}
