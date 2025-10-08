#include <iostream>
#include <iomanip>

using namespace std;

void parcela(float a, int b){
    float res = a/b;
    cout << "COMPRA A PRAZO" << endl;
    cout << "Valor da parcela a prazo: R$ ";
    cout << fixed << setprecision(2) << res;
}

int main()
{
    float valor;
    int num_parcelas;
    cin >> valor >> num_parcelas;
    parcela(valor, num_parcelas);
    return 0;
}