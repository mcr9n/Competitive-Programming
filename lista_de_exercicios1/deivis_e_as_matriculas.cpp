#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> nome_e_ordem;
    vector <string> nomes;
    while(n--){
        string nome;
        cin >> nome;
        nome_e_ordem.push_back(nome);
        nomes.push_back(nome);
    }
    sort(nomes.begin(),nomes.end());

    for(int i = 0; i < nome_e_ordem.size(); i++){
        for(int j = 0; j < nomes.size(); j++){
            if(nome_e_ordem[i] == nomes[j]){
                cout << j << " ";            }
        }
    }
    
    





    return 0;
}