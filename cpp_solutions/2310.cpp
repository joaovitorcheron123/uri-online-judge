#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    float soma = 0.00, soma1 = 0.00, soma2 = 0.00;
    float calc = 0.00, calc2 = 0.00, calc1 = 0.00;

    while(n--)
    {
        string nome;
        
        cin >> nome;

        int s, b, a;
        cin >> s >> b >> a;
        soma = soma + s;
        soma1 = soma1 + b;
        soma2 = soma2 + a;

        int s1, b1, c1;
        cin >> s1 >> b1 >> c1;
        calc = calc + s1;
        calc1 = calc1 + b1;
        calc2 = calc2 + c1;
    }

    float saq, bloq, ataq;
    saq = (calc * 100.00) / soma;
    bloq = (calc1 * 100.00) / soma1;
    ataq = (calc2 * 100.00) / soma2;

    cout << "Pontos de Saque: " << fixed << setprecision(2) << saq << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << bloq << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << ataq << " %." << endl;
    return 0;
} 
