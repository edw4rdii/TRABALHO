#include <iostream>
using namespace std;

int main()
{
    double altura, comprimento, largura, capacidadeTotal, autonomia;

    cout << "Informe os dados do reservatorio em cm, altura: ";
    cin >> altura;
    
    cout << "Comprimento: ";
    cin >> comprimento;
    
    cout << "Largura: ";
    cin >> largura;
    
    cout << "Agora informe o consumo medio diario, em litros: ";
    cin >> autonomia;
    
    capacidadeTotal = (altura * comprimento * largura) / 1000;
    
    autonomia = capacidadeTotal / autonomia;

    cout << "A capacidade total do reservatorio eh de " << capacidadeTotal << " litros." << endl;
    cout << "A autonomia do reservatorio eh de " << autonomia << " dias." << endl;
    
    if (autonomia < 2){
        cout << "Seguindo esses dados, o consumo eh elevado.";
    }else if(autonomia >= 2 & autonomia <= 7){
        cout << "Seguindo esses dados, o consumo eh moderado.";
    }else if (autonomia > 7){
        cout << "Seguindo esses dados, o consumo eh baixo";
    }
}