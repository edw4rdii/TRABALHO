#include <iostream>
using namespace std;

int main()
{
    double a, b, c, delta;
    
    cout << "Informe o valor para determinarmos o tipo da raiz da equacao de 2 grau.";
    cout << "Valor de A: ";
    cin >> a;
    
    cout << "Valor de B: ";
    cin >> b;
    
    cout << "Valor de C: ";
    cin >> c;
    
    delta = (b * b) - 4 * a * c;
    
    if (delta == 0) {
        cout << "A equacao possui apenas uma raiz real.";
    }
    else if (delta > 0){
        cout << "A equacao possui duas raizes reais e destintas.";
    }
    else if (delta < 0){
        cout << "A equacao possui uma raiz complexa.";
    }
}