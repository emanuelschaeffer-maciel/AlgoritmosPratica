#include <iostream>
using namespace std;

float circo(float p1, float p2){
    float p3 = (20 - p1 -p2) / 2.0;
    return p3;
}

int main()
{
    float p1, p2;
    cin >> p1 >> p2;
    float p3 = circo(p1,p2);
    cout<<"CALCULO DE NOTA PARA APROVACAO\nNota na 1a prova: " << p1;
    cout << "\nNota na 2a prova: " << p2;
    cout << "\nNota necessaria: " << p3;

    return 0;
}