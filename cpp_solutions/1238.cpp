#include <iostream>

using namespace std;

int main(){
    int n,a,b;
    char um[50];
    char dois[50];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> um;
        cin >> dois;
        a = 0;
        b = 0;
        for(int j = 0; j < 50; j++){
            if(um[j] == '\0') a = 1;
            if(dois[j] == '\0') b = 1;
            if(a == 1 && b == 1) break;
            if(a == 0) cout << um[j];
            if(b == 0) cout << dois[j];
        }
        cout << endl;
    }
    return 0;
} 
