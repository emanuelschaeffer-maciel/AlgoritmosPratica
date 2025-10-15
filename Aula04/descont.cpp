#include <iostream>
using namespace std;



int main()
{
    cout<<"Forma de pagamento:\n- À vista.\n- Cheque para trinta dias.\n- Em duas vezes.\n- Em três vezes.\n- Em quatro vezes.\n- A partir de cinco vezes.\nEntre com sua opção:";
    int i;
    cin >> i;
    
    switch (i){
        case 1: cout << "Desconto de 20%";
                break;
        case 2: case 3: case 4: cout << "Mesmo preço a vista";
                break;
        case 5: cout << "Juros de 3% ao mês";
                break;
        case 6: cout << "Juros de 5% ao mês";
                break;
        default: cout << "invalido";
    }
    
    return 0;
}