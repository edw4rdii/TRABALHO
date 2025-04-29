#include <iostream>
using namespace std;

int main()
{
    double lado1, lado2, lado3;

    cout << "Informe os 3 lados do triangulo, primeiro lado: ";
    cin >> lado1;
    
    cout << "Segundo lado: ";
    cin >> lado2;
    
    cout << "Terceiro lado: ";
    cin >> lado3;
    

    if (lado1 == lado2 & lado2 == lado3){
        cout << "O triangulo eh equilatero.";
    }
    else if (lado1 == lado2 || lado1 == lado2 || lado2 == lado3 ){
        cout << "O triangulo eh isosceles.";
    }
    else{
        cout << "O triangulo eh escaleno.";
    }
    
    
    
}