#include <iostream>

using namespace std;

int main(){
    int vetor[2010] = {0};
    int i, n, x;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        vetor[x]++;
    }
    for(i = 1; i <= 2000; i++){
        if(vetor[i] > 0)
            cout << i << " aparece " << vetor[i] << ' ' << "vez(es)" << endl;
    }
    return 0;
} 
