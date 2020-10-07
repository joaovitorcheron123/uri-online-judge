#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, t ;
     map < int ,int > st;
     cin >> a;
     while(a--){
     	cin >> t;
     	if(st.count(t) == 0)
     	    st[t]++;
     }
     cout << st.size() << endl;
    return 0;
}
 
