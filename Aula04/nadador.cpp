
#include <iostream>
using namespace std;

void classificaNadador(int i){
    if (5<=i&&i<=7) cout << "infantil a";
    else if (8<=i&&i<=10) cout<< "infantil b";
    else if (11<=i&&i<=13) cout <<"juvenil a";
    else if (14<=i&&i<=17) cout <<"juvenil b";
    else if (18<=i&&i<=30) cout <<"adulto";
    else if (i>30) cout <<"senior";
    else cout <<"invalido";

}

int main()
{
    int i;
    cin >> i;
    classificaNadador(i);

    return 0;
}