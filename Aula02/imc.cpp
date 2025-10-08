#include <iostream>
using namespace std;

int main() {
    
    float peso, altura, imc;
    cout << "Digite o peso em kg: ";
    cin >> peso;
    cout << "Digite a altura em m: ";
    cin >> altura;
    
    imc = peso / (altura*altura);
    cout << "Valor do IMC: " << imc;
    
    return 0;
}
