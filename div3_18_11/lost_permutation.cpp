#include <bits/stdc++.h>
using namespace std;
int calculaSoma(vector<int> v)
{
    int soma = 0;
    for (int i = 0; i < v.size(); i++)
    {
        soma += v[i];
    }
    return soma;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,s;
        cin >> m >> s;
        vector<int> polycarp_numbers;
        vector<int> numeros_que_faltam;
        int checagem = 0;
        while(m--){
            int aux;
            cin >> aux;
            polycarp_numbers.push_back(aux);
        }
        vector<int> ordered_copy;
        for (int i=0; i<polycarp_numbers.size(); i++){
            ordered_copy.push_back(polycarp_numbers[i]);
        }
            

        sort(ordered_copy.begin(), ordered_copy.end());
        int soma_ideal = (ordered_copy[ordered_copy.size()-1] + 1)*ordered_copy[ordered_copy.size() - 1]/2;
        int numero_que_falta = soma_ideal - calculaSoma(polycarp_numbers);
        numeros_que_faltam.push_back(numero_que_falta);
        if(calculaSoma(numeros_que_faltam) == s){
                checagem = 1;
        }else{
            while(calculaSoma(numeros_que_faltam) < s){
                numero_que_falta = ordered_copy[ordered_copy.size()-1] + 1;
                ordered_copy.push_back(numero_que_falta);
                numeros_que_faltam.push_back(numero_que_falta);
                if(calculaSoma(numeros_que_faltam) == s){
                    checagem = 1;
                    break;
                }
            }

        }
        if(checagem == 1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }



    }




    return 0;
}