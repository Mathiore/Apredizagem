#include <iostream>

using namespace std;



int main() {
    setlocale(LC_ALL, "Portuguese");
    int distancia, consumo, litros;
    float custo, gasto;
    cout<<"Dist�ncia da viagem em km?";
    cin>>distancia;
    cout<<"Quantos km o veiculo percorre por litro?";
    cin>>consumo;
    cout<<"Quanto � o custo da gasolina?";
    cin>>custo;
    litros = distancia/consumo;
    gasto = litros*custo;
    cout<<"Voc� gastar� R$"<<gasto;



return 0;

}
