#include <iostream>
using namespace std;

int main()
{
    double val_produto;
    int pagamento;

    cout << "Digite o valor do produto: ";
    cin >> val_produto;

    cout << "Escolha a forma de pagamento:" << endl << "A vista/cheque (1)" << endl << "A vista no credito (2)" << endl;
    cout << "Parcelado em 2x (3)" << endl << "Parcelado em 3x ou mais (4)" << endl << "Resposta: ";
    cin >> pagamento;

    if (pagamento == 1)
    {
        cout << "A vista voce recebe 15% de desconto, resultando um total de: R$" << val_produto - (val_produto * 0.15);
    }else if (pagamento == 2)
    {
        cout << "A vista no credito voce recebe 10% de desconto, resultando um total de R$ " << val_produto - (val_produto * 0.10);
    }else if (pagamento == 3)
    {
        cout << "Parcelado em duas vezes, o preço continua o de R$ " << val_produto;
    }else if (pagamento == 4)
    {
        cout << "Parcelado em tres vezes ou mais voce pagara um juros de 10%, resultando um total de R$ " << val_produto + (val_produto * 0.10);
    }else{
        cout << "Resposta incorreta, tente novamente.";
    }
}