#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
   int idade, batimento, m, h, d, ano, vida, rest, beat;
   cout<<"sua idade: ";
   cin>>idade;
   cout<<"Voc� espera viver at� que idade? ";
   cin>>vida;
   rest = vida-idade;
   batimento = 1;
   m = 60*batimento;
   h = 60*m;
   d = 24*h;
   ano = 365*d;
   batimento = ano;
   beat = rest*batimento;
   cout<<"O seu cora��o bater�: "<<beat<<" vezes se voc� viver por "<< rest<<" anos";
   return 0;
}
