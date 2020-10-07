#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        for (int i = 1; i <= n; i++)
            for (int j = 0, c = 0, r = i; j < n; j++, c = r == 1 ? 1 : c, r += 2*c - 1)
                cout << setw(3) << r << (j == n - 1 ? "\n" : " ");
        cout << "\n";
    }
    return 0;
} 
