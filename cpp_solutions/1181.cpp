#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double m[12][12];
	int l;
	char c;
    
	cin >> l;
	cin >> c;

	double res=0;

	for(int i = 0; i<12; i++)
		for(int j = 0; j < 12; j++)
			cin >> m[i][j];

	for(int i = 0; i < 12; i++)
		res += m[l][i];

	if(c == 'M')
		res /= 12;

    cout << fixed << setprecision(1) << res << endl;
    return 0;
} 
