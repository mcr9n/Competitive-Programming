#include <bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin >> n;
    float soma = 0;
    for(int i = 0; i < n; i++){
        char aluno, gabarito;
        cin >> aluno >> gabarito;
        if(aluno == gabarito){
            soma += 1;
        }
    }
    float nota = soma / n;
    cout <<fixed<<setprecision(2)<< "Nota: " << nota*10 << endl;




    return 0;
}