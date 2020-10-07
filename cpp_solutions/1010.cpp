#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double unidades1, unidades2, preco1, preco2;
    int cod1, cod2;
    cin >> cod1 >> unidades1 >> preco1;
    cin >> cod2 >> unidades2 >> preco2;
    double valor1 = unidades1 * preco1;
    double valor2 = unidades2 * preco2;
    double total = valor1 + valor2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
} 
