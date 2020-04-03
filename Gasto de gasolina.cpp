#include <iostream>

using namespace std;



int main() {
    setlocale(LC_ALL, "Portuguese");
    int distancia, consumo, litros;
    float custo, gasto;
    cout<<"Distância da viagem em km?";
    cin>>distancia;
    cout<<"Quantos km o veiculo percorre por litro?";
    cin>>consumo;
    cout<<"Quanto é o custo da gasolina?";
    cin>>custo;
    litros = distancia/consumo;
    gasto = litros*custo;
    cout<<"Você gastará R$"<<gasto;



return 0;

}
