#include <iostream>
#include <cmath>
using namespace std;

bool isTriangle(float a, float b, float c){
    return ((a+b>c) && (a+c>b) && (b+c>a));
}


int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << isTriangle(a,b,c);

    return 0;
}