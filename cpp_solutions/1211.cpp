#include <iostream>
#include <algorithm>

using namespace std;
int main(){
  int n;
  string telefones[101010];
  while(cin >> n){
    int res = 0;
    for(int i = 0; i < n; i++){
      cin >> telefones[i];
    }
    sort(telefones, telefones+n);

    string::iterator it, itAux;
    for(int i = 0; i < n-1; i++){
      itAux = telefones[i+1].begin();
      for(it = telefones[i].begin(); it != telefones[i].end(); ++it){
        if(*it == *itAux) res++;
        else break;
        ++itAux;      
      }
    }
    cout << res << endl;
  }
  return 0;
} 
