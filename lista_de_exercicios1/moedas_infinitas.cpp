#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n >> a;
    long long resto = n % 500;
    if(resto <= a){
        cout << "Sim";
    }
    else{
        cout << "Nao";
    }





    return 0;
}