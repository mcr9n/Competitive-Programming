#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vetor;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        vetor.push_back(aux);
    }
    sort(vetor.begin(), vetor.end());
    int elementos_distintos = 0;
    for(int i = 0; i < n; i++){
        if(vetor[i] != vetor[i+1]){
            elementos_distintos++;
        }
    }

    cout << elementos_distintos;




    return 0;
}