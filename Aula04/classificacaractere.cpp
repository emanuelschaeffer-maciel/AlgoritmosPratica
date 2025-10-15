
#include <iostream>
using namespace std;

void classificaCaractere(char c){
    if (c=='+'||c=='-'||c=='*'||c=='/'||c=='%') cout << "Operador matematico";
    else if (c=='<'||c=='>') cout << "Operador relacional";
    else if (c=='!') cout << "Operador logico";
    else if (c=='&'||c=='='||c=='"'||c=='\''||c=='('||c==')'||c=='{'||c=='}') cout << "outro";
    else cout << "nao identificado";
}

int main()
{
    char c;
    cin >> c;
    classificaCaractere(c);

    return 0;
}