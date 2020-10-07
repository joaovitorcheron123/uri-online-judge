#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compara(int a, int b){
    return a > b;
}

int main(){
    int n[5], a[5][10], K, ans;
    int i, u, v, w, x, y;
    while(cin >> n[0]){
        for(int i = 0; i < 5; i++){
            if(i != 0)
                cin >> n[i];
            for(u = 0; u < n[i]; u++){
                cin >> a[i][u];
            }
        }
        cin >> K;
        vector<int> sums;
        for(u = 0; u < n[0]; u++)
            for(v = 0; v < n[1]; v++)
                for(w = 0; w < n[2]; w++)
                    for(x = 0; x < n[3]; x++)
                        for(y = 0; y < n[4]; y++)
                            sums.push_back(a[0][u] + a[1][v] +
                                a[2][w] + a[3][x] + a[4][y]);
        sort(sums.begin(), sums.end(), compara);
        ans = 0;
        for(i = 0; i < K; i++)
            ans += sums[i];
        cout << ans << endl;
    }
    return 0;
} 
