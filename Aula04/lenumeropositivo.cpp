#include <iostream>
#include <cmath>
using namespace std;

int leNumeroPositivo(){
    int a;
    cin >> a;
    if (a>0) return a;
    else cout << "O numero não é positivo, voce tem mais uma tentativa ";
    cin >> a;
    if (a>0) return a;
    
    cout << "O numero não é positivo. ";
    return 0;
}


int main()
{
    int res = leNumeroPositivo();
    cout << res;

    return 0;
}