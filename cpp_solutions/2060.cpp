#include <iostream>

using namespace std;

int main(){
    int m2,m3,m4,m5;
    m2 = 0;
    m3 = 0;
    m4 = 0;
    m5 = 0;
    int qn;
    cin >> qn;
    while(qn--){
        int n;
        cin >> n;

        if(n % 2 == 0) 
            m2++;
        if(n % 3 == 0)
            m3++;
        if(n % 4 == 0)
            m4++;
        if(n % 5 == 0)
            m5++;
    }
    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;
    return 0;
} 
