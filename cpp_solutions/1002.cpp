#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double pi = 3.14159;
    double r;
    cin >> r;
    double area = pi * (r * r); 
    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
} 
