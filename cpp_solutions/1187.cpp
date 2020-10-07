#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double m[12][12];
	char c;

	cin >> c;

	double res=0;
	int qtd = 0;

	for(int i = 0; i<12; i++)
		for(int j = 0; j < 12; j++)
			cin >> m[i][j];

	for(int i = 0; i < 12; i++)
		for(int j = 0; j <12; j++)
			if( i + j < 11 && j > i){
				res += m[i][j];
				qtd++;
			}

	if(c == 'M')
		res /= qtd;

    cout << fixed << setprecision(1) << res << endl;
    return 0;
} 
