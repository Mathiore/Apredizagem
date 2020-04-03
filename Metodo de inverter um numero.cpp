#include <iostream>
using namespace std;



int main() {
    int numero, u, d, c, m, dm, t;
    cout << "Escolha um numero de 5 Digitos: ";
    cin >> numero;
    u = numero % 10;
    t = numero / 10;

    d = t % 10;
    t = t / 10;

    c = t % 10;
    t = t / 10;

    m = t % 10;
    t = t / 10;

    dm = t;



    cout << "Numero invertido: " << u << d << c << m << dm;



    return 0;

}
