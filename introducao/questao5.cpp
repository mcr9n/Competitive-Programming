#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> vetor_pares;
    vector<int> vetor_impares;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vetor_pares.push_back(i + 1);
        }
        else
        {
            vetor_impares.push_back(i + 1);
        }
    }
    bool u = false;
    ll tamanho_vetor_total = vetor_pares.size() + vetor_impares.size();
    vector<int> vetor_total;
    if (tamanho_vetor_total % 2 == 0)
    {
        for (unsigned int i = 0; i < vetor_impares.size(); i++)
        {
            vetor_total.push_back(vetor_impares[i]);
        }
        for (unsigned int i = 0; i < vetor_pares.size(); i++)
        {
            vetor_total.push_back(vetor_pares[i]);
        }
    }else{
        for (unsigned int i = 0; i < vetor_pares.size(); i++)
        {
            vetor_total.push_back(vetor_pares[i]);
        }
        for (unsigned int i = 0; i < vetor_impares.size(); i++)
        {
            vetor_total.push_back(vetor_impares[i]);
        }
    }

    if (tamanho_vetor_total > 3 || tamanho_vetor_total == 1)
    {
        u = true;
    }
    if (u)
    {
        for (long unsigned i = 0; i < vetor_total.size(); i++)
        {
            if (i == vetor_total.size() - 1)
            {
                cout << vetor_total[i];
            }
            else
            {
                cout << vetor_total[i] << " ";
            }
        }
    }
    else
    {
        cout << "NO SOLUTION";
    }
    return 0;
}