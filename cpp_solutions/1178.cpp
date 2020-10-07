#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n;
    cin >> n;
    
    cout << "N[" << 0 << "] = " << fixed << setprecision(4) << n << endl;

    for(int i = 1; i < 100; i++){
            n = n/2.0;
            cout << "N[" << i << "] = " << fixed << setprecision(4) << n << endl;
    }
    return 0;
} 
