#include <bits/stdc++.h>
#include <list>
using namespace std;
bool comparacao(int a, int b)
{
    if (a < b)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    list<int> lista_de_pesos;
    int necessary_gondolas = 0;
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        lista_de_pesos.push_back(aux);
    }
    lista_de_pesos.sort(comparacao);

    while (lista_de_pesos.size() != 0)
    {
        if (lista_de_pesos.size() == 1)
        {
            necessary_gondolas++;
            lista_de_pesos.pop_front();
        }
        else
        {
            if (lista_de_pesos.front() + lista_de_pesos.back() <= x)
            {
                necessary_gondolas++;
                lista_de_pesos.pop_front();
                lista_de_pesos.pop_back();
            }
            else
            {
                necessary_gondolas++;
                lista_de_pesos.pop_back();
            }
        }
    }
    cout << necessary_gondolas;

    return 0;
}