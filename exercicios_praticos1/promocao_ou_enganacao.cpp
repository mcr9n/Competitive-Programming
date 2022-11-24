#include <bits/stdc++.h>
using namespace std;
int main(){
    float n, r, m ,p;
    cin >> n >> r >> m >> p;
    if((n / r) < (m / p)) cout << "Promocao"<<endl;
    else cout << "Enganacao"<<endl;

    return 0;
}