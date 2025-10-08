#include <iostream>
#include <math.h>
using namespace std;

float calc_volume(float x, float y, float z){
    return x*y*z;
}

float calc_espessura(float volume){
    return 0.8 + ceil(volume - 1.00000001)*0.3;
}

float valor_face(float a, float b, float espessura){
    return (a*b*espessura*45.0);
}


int main()
{
    float larg,alt,prof;
    cout << "Largura: ";
    cin >> larg;
    cout << "Altura: ";
    cin >> alt;
    cout << "Profundidade: ";
    cin >> prof;
    float volume = calc_volume(larg,alt,prof);
    float espessura = calc_espessura(volume);
    
    float valor_fundo = valor_face(larg,prof, espessura);
    float valor_lateral = 2.0*valor_face(larg,alt, espessura);
    float valor_lateral2 = 2.0*valor_face(prof,alt, espessura);
    
    cout << "Valor: " << valor_fundo + valor_lateral + valor_lateral2;


    return 0;
}