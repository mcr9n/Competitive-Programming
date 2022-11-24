#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int contador_para_meias_novas = 0;
    int quantidade_de_dias = 0;
    int quantidade_de_meias_novas = 0;
    for(int i = 0; i < n;i++){
        quantidade_de_meias_novas += 1;
    }
    while(quantidade_de_meias_novas > 0){
        quantidade_de_meias_novas--;
        quantidade_de_dias++;
        contador_para_meias_novas++;
        if(contador_para_meias_novas == m){
            contador_para_meias_novas = 0;
            quantidade_de_meias_novas++;
        }
        if(quantidade_de_meias_novas == 0){
            break;
        }

    }
    cout << quantidade_de_dias << endl;




    return 0;
}