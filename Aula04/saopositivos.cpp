#include <iostream>
#include <cmath>
using namespace std;

bool saoPositivos(float a, float b){
    return (a > 0 && b > 0) ;
}


int main()
{
    float a, b;
    cin >> a >> b;
    if (saoPositivos(a,b)) cout << "São positivos";
    else cout << " Ao menos um nao é positivo";

    return 0;
}