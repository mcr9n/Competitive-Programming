#include <bits/stdc++.h>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;
bool checa_soma_de_digitos(int n,int a,int b){
    int soma = 0;
    string novo_n = to_string(n);
    for(int i = 0; i < novo_n.length(); i++){
         soma += stoi(to_string(novo_n[i]));
    }
    if(soma >= a && soma <= b){
        return true;
    }
    else{
        return false;
    }
}
int calcula_soma_1_a_n(int n){
    int soma = (1 + n) * n / 2;
    return soma;
}
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){

        if(checa_soma_de_digitos(i,a,b)){
            cout << calcula_soma_1_a_n(i);
            break;
        }
    }
    






    return 0;
}
