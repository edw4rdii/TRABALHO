#include <iostream>
using namespace std;

int main()
{
    string convidadoA, convidadoB, convidadoC;
    int pratoA = 300, pratoB = 1500, pratoC = 600, totalPrato = 0;
    
    
    cout << "Informe os convidados presentes, o convidado A esta presente (sim ou nao)? ";
    cin >> convidadoA;

    cout << "O convidado B esta presente (sim ou nao)? ";
    cin >> convidadoB;
    
    cout << "O convidado C esta presente (sim ou nao)? ";
    cin >> convidadoC;
    
    if (convidadoA == "sim"){
        totalPrato = totalPrato + pratoA;
    }
    if (convidadoB == "sim"){
        totalPrato = totalPrato + pratoB;
    }
    if (convidadoC == "sim"){
        totalPrato = totalPrato + pratoC;
    }
    
    cout << "A quantidade necessaria a ser cozinhada eh de " << totalPrato << " gramas!";
}