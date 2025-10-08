#include <iostream>
#include <cmath>

using namespace std;

void convert(int s){
    int h = s/60/60;
    s = s%(3600);
    int m = s/60;
    s = s%60;
    cout << "Conversão: " << h << " horas, " << m << " minutos e " << s << " segundos."; 
}

int main()
{
    int horas;
    cin >> horas;
    convert(horas);

    return 0;
}