#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string penultima;
    string ultima;
    int contagem = 0;
    int maximo = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (i == 0)
        {
            ultima = n[i];
        }
        else
        {
            penultima = ultima;
            ultima = n[i];
            if (ultima == penultima && i != n.size() - 1)
            {
                contagem++;
            }
            else if (ultima == penultima && i == n.size() - 1)
            {
                contagem++;
                if (contagem > maximo)
                {
                    maximo = contagem;
                }
            }
            else
            {
                if (contagem > maximo)
                {
                    maximo = contagem;
                }
                contagem = 0;
            }
        }
    }
    cout << maximo + 1;
    return 0;
}
