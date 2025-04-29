#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, meio;

    cout << "Digite o primeiro valor: ";
    cin >> a1;

    cout << "Digite o segundo valor: ";
    cin >> a2;

    cout << "Digite o terceiro valor: ";
    cin >> a3;

    if (a1 < a2 & a1 < a3)
    {    
        if (a2 < a3)
        {
            meio = a2;
        }else{
            meio = a3;
        }
    }  

    else if (a2 < a1 & a2 < a3)
    {
        if (a1 < a3)
        {
            meio = a1;
        }else{
            meio = a3;
        }   
    }

    else if (a3 < a1 & a3 < a2)
    {
        if (a1 < a2)
        {
            meio = a1;
        }else{
            meio = a2;
        }   
    }

    cout << "A mediana baseada nos valores informados e: " << meio;
}