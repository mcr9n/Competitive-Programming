#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> vetor;
    long long movimentos = 0;
    int primeiro_elemento = 0;
    int segundo_elemento = 0;
    // construindo o vetor
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        vetor.push_back(aux);
    };
    // ordenando o vetor com base em movimentos
    for (int i = 0; i < n; i++)
    {
        if (i <= n - 2)
        {
            primeiro_elemento = vetor[i];
            segundo_elemento = vetor[i + 1];
            while (primeiro_elemento > segundo_elemento)
            {
                segundo_elemento += 1;
                vetor[i + 1] = segundo_elemento;
                movimentos++;
            }
        }
    }
    cout << movimentos;

    return 0;
}