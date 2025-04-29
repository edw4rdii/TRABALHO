#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    
    cout << "Informe os 3 angulos do triangulo, primeiro angulo: ";
    cin >> a1;
    
    cout << "Segundo angulo: ";
    cin >> a2;
    
    cout << "Terceiro angulo: ";
    cin >> a3;
    
    if (a1+a2+a3 == 180){
        
        if (a1 < 90 & a2 < 90 & a3 < 90){
            cout << "O triangulo eh acutangulo.";
        }
        else if (a1 < 90 & a2 < 90 & a3 == 90 || a1 < 90 & a3 < 90 & a2 == 90 || a2 < 90 & a3 < 90 & a1 == 90){
            cout << "O triangulo eh retangulo.";
        }
        else if (a1 < 90 & a2 < 90 & a3 > 90 || a1 < 90 & a3 < 90 & a2 > 90 || a2 < 90 & a3 < 90 & a1 > 90){
            cout << "O triangulo eh obtusangulo.";
        }
    }else{
        cout << "Valor incorreto;";
    }
}