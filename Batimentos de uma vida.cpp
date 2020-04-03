#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
   int idade, batimento, m, h, d, ano, vida, rest, beat;
   cout<<"sua idade: ";
   cin>>idade;
   cout<<"Você espera viver até que idade? ";
   cin>>vida;
   rest = vida-idade;
   batimento = 1;
   m = 60*batimento;
   h = 60*m;
   d = 24*h;
   ano = 365*d;
   batimento = ano;
   beat = rest*batimento;
   cout<<"O seu coração baterá: "<<beat<<" vezes se você viver por "<< rest<<" anos";
   return 0;
}
