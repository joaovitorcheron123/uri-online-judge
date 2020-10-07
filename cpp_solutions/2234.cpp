#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double h,p,m;
    cin >> h >> p;
    m = h / p;
    cout << fixed << setprecision(2) << m << endl;      
    return 0;
} 
