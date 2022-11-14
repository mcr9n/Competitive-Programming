#include<bits/stdc++.h>
//biblioteca stl
//no terminal do linux
//g++ vinicius.cpp -std=c++17 -o vinbin
//para compilar
//./vinbin
//para executar
//f -> real de baixa precisão
//d -> inteiro
//c -> char
//char -> 8 bits [-128,127]
//vetor.size()
//vetor[i]
//push_back + make pair
// sort(v.begin(),v.end(), greater<int>()); ordenação decrescente
// 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 2;
    int b;
    int s = a + b;
    int n = s;
    int m = s;
    scanf("%d", &b);
    printf("%d",s);

    cin >> n >> m;
    vector<int> vetor;


    for (int i = 0; i < n; i++){
        scanf("%d", &a);
        vetor.push_back(a);
        
    }

    return 0;

}
//cin/cout vs scanf/printf
//cin/cout:
//iostream stl
//
