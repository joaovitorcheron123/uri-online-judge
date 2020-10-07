#include<bits/stdc++.h>

using namespace std;

int main (){
    int n, m, i, j, k;
    int cont, aux;
    int vagoes[50];
    cin >> n;
    for(i = 0; i < n; i++){
          cin >> m;
          cont = 0;
          for(j = 0; j < m; j++){
                cin >> vagoes[j];
          }
          for(j = 0; j < m; j++){
                for(k = j+1; k < m; k++){
                      if ( vagoes[j] > vagoes[k] ){
                           aux = vagoes[j];
                           vagoes[j] = vagoes[k];
                           vagoes[k] = aux;
                           cont++;
                      }
                }
          }
          cout << "Optimal train swapping takes " << cont << " swaps.\n";
    }
    return 0;
} 
