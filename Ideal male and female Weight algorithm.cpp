#include <iostream>
using namespace std;

int main(){
    float altura, peso;
    string sexo;
    cout<<"Are you female or male? ";
    cin>>sexo;
    cout<<"\nWhat is your height? ";
    cin>>altura;
    if (sexo == "male"){
        peso = (72.7*altura)-58;
        cout<<"\n As a male your ideal Weight is: "<< peso;
    } else {
        peso = (62.1*altura)-44.7;
        cout<<"\n As a female your ideal Weight is: "<<peso;
    }

    return 0;
}
