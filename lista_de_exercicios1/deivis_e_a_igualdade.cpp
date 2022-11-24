#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> dinheiros;
    int numero_necessario_para_igualdade = 0;
    while(n--){
        int dinheiro;
        cin >> dinheiro;
        dinheiros.push_back(dinheiro);
    }
    sort(dinheiros.begin(),dinheiros.end());
    int maximo = dinheiros[dinheiros.size()-1];
    for(int i = 0; i < dinheiros.size(); i++){
        numero_necessario_para_igualdade += maximo - dinheiros[i];
    }
    cout << numero_necessario_para_igualdade;





    return 0;
}