#include <iostream>
using namespace std;

int main()
{
    double P1, P2, C1, C2;

    cout << "Informe o peso da crianca da esquerda: ";
    cin >> P1;

    cout << "Informe o peso da crianca da direita: ";
    cin >> P2;

    cout << "Informe o comprimento do lado esquerdo: ";
    cin >> C1;

    cout << "Informe o comprimento do direito: ";
    cin >> C2;

    if (P1 * C1 == P2 * C2)
    {
        cout << "A balanca esta equilibrada!";
    }else if (P1 * C1 > P2 * C2)
    {
        cout << "A balanca esta pendendo para a esquerda.";
    }else if (P1 * C1 < P2 * C2)
    {
        cout << "A balanca esta pendendo pra a direita.";
    }
}