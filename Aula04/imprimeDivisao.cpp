#include <iostream>
#include <cmath>
using namespace std;

void imprimeDivisaoInteira(int a, int b){
    cout << a/b << endl;
}
void imprimeDivisaoReal(float a, float b){
    cout << a/b;
}


int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0) cout << "Não é possível dividir por zero.";
    else {
        imprimeDivisaoInteira(a,b);
        imprimeDivisaoReal(a,b);
    }

    return 0;
}