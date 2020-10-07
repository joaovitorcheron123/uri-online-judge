#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        int max_t = to_string(1 << 2*(n - 1)).size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cout << setw(max_t) << (1 << (i + j)) << (j == n - 1 ? "\n" : " ");
        cout << "\n";
    }

    return 0;
} 
