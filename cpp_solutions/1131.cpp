#include <iostream>

using namespace std;

int main(){
    int a, b;
    int rep;
    int inter = 0;
    int gremio = 0;
    int grenal = 0;
    int empate = 0;
    
    while(true){
        cin >> a;
        cin >> b;
                
        if(a > b) inter ++;
        if(a < b) gremio ++;
        if(a == b) empate++;
        grenal++;
                
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> rep;
                
        if(rep == 2) 
            break;
    }

    cout << grenal << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;
    
    if(inter > gremio) cout << "Inter venceu mais" << endl;
    if(inter < gremio) cout << "Gremio venceu mais" << endl;
    if(inter == gremio) cout << "Nao houve vencedor" << endl;
    
    return 0;
} 
