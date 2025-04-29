#include <iostream>
using namespace std;

int main()
{
    double pFinal, pInicial, vInicial, aceleracao, tempo;

    cout << "Vamos calcular a posicao de um objeto em funcao do tempo, preencha as informacoes necessarias:" << endl;

    cout << "Posicao inicial: ";
    cin >> pInicial;

    cout << "Velocidade inicial: ";
    cin >> vInicial;

    cout << "Aceleracao: ";
    cin >> aceleracao;

    cout << "Tempo: ";
    cin >> tempo;

    pFinal = pInicial + vInicial * tempo + (aceleracao  * (tempo * tempo)) / 2;

    cout << "A posicao desse objeto no tempo de " << tempo << " segundos eh: " << pFinal << " metros.";

}