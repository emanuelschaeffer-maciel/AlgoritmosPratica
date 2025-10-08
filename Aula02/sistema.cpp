
#include <iostream>
using namespace std;

int main()
{
    cout << "x + y = ";
    float soma;
    cin >> soma;
    
    cout << "x - y = ";
    float dif;
    cin >> dif;
    
    float x = (soma + dif)/2;
    float y = soma - x;
    
    cout << "x = " << x << endl;
    cout << "y = " << y;
    
    
    

    return 0;
}
