#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    int menor, meio, maior;

    cout << "Digite o primeiro valor: ";
    cin >> a1;

    cout << "Digite o segundo valor: ";
    cin >> a2;

    cout << "Digite o terceiro valor: ";
    cin >> a3;

    if (a1 < a2 & a1 < a3)
    {
        menor = a1;
       
        if (a2 < a3)
        {
            meio = a2;
            maior = a3;
        }else{
            meio = a3;
            maior = a2;
        }
    }  

    else if (a2 < a1 & a2 < a3)
    {
        menor = a2;

        if (a1 < a3)
        {
            meio = a1;
            maior = a3;
        }else{
            meio = a3;
            maior = a1;
        }   
    }

    else if (a3 < a1 & a3 < a2)
    {
        menor = a3;

        if (a1 < a2)
        {
            meio = a1;
            maior = a2;
        }else{
            meio = a2;
            maior = a1;
        }   
    }

    cout << "Valores informados em ordem crescente: " << menor << ", " << meio << ", " << maior << ".";
}