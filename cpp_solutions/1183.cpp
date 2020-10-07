#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double N[12][12];
    char c;
    double soma = 0.0;
    
    cin >> c;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> N[i][j];
                if(j > i){
                    soma += N[i][j];
                }
        }
   }
    
    if(c == 'S')
         cout << fixed << setprecision(1) << soma << endl;
    else
         cout << fixed << setprecision(1) << soma / 66.0 << endl;
    return 0;
} 
