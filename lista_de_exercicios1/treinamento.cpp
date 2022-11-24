#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> questoes;
    int questoes_possiveis = 0;
    int i = 0;
    int contador = 1;
    while(n--){
        int numero_de_questoes;
        cin >> numero_de_questoes;
        questoes.push_back(numero_de_questoes);
    }
    sort(questoes.begin(),questoes.end());
    while(i < questoes.size()){
        if(questoes[i] >= contador){
            questoes_possiveis++;
            contador++;
            i++;
        }
        else{
            i++;
        }
    }
    cout << questoes_possiveis;






    return 0;
}