#include <bits/stdc++.h>
#include <list>
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int aplicantes;
    cin >> aplicantes;

    int apartamentos_livres;
    cin >> apartamentos_livres;

    int diferenca_aceitavel;
    cin >> diferenca_aceitavel;

    vector<int> lista_de_aplicantes;
    vector<int> lista_de_apartamentos;

    for (int i = 0; i < aplicantes; i++)
    {
        int aux;
        cin >> aux;
        lista_de_aplicantes.pb(aux);
    }
    for (int i = 0; i < apartamentos_livres; i++)
    {
        int aux;
        cin >> aux;
        lista_de_apartamentos.pb(aux);
    }

    sort(lista_de_aplicantes.begin(), lista_de_aplicantes.end());
    sort(lista_de_apartamentos.begin(), lista_de_apartamentos.end());
    int i = 0;
    int j = 0;
    int matches = 0;

    while(i < lista_de_apartamentos.size() && j < lista_de_aplicantes.size())
    {
        if(abs(lista_de_apartamentos[i] - lista_de_aplicantes[j]) <= diferenca_aceitavel)
        {
            matches++;
            i++;
            j++;
        }
        else if(lista_de_apartamentos[i] < lista_de_aplicantes[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << matches;

    return 0;
}
