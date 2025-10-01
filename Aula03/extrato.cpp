
#include <iostream>
using namespace std;

int main()
{
    float saldo = 0, movimento = 0;
    
    cout << "Saldo inicial: ";
    cin >> saldo;
    
    cout << "Salario: ";
    cin >> movimento;
    saldo = saldo + movimento;
    cout << "Saldo parcial: " << saldo << endl;

    
    cout << "1a retirada: ";
    cin >> movimento;
    saldo = saldo - movimento;
    cout << "Saldo parcial: " << saldo << endl;
    
    cout << "2a retirada: ";
    cin >> movimento;
    saldo = saldo - movimento;
    cout << "Saldo parcial: " << saldo << endl;
    
    cout << "3a retirada: ";
    cin >> movimento;
    saldo = saldo - movimento;
    cout << "Saldo final: " << saldo << endl;
    
    return 0;
}
