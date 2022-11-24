#include <bits/stdc++.h>
using namespace std;
bool primeira_checagem(string numero, vector<char> terceiro)
{
    bool checagem = true;

    for (int i = 0; i < numero.length(); i++)
    {
        if (numero[i] == terceiro[0] && numero[i + 1] == terceiro[1] && numero[i + 2] == terceiro[2])
        {
            checagem = true;
            i += 2;
        }
        else if (numero[i] == terceiro[0] && numero[i + 1] == terceiro[1])
        {
            checagem = true;
            i += 1;
        }
        else if (numero[i] == terceiro[0])
        {
            checagem = true;
        }
        else
        {
            checagem = false;
            break;
        }
    }

    return checagem;
}
int main()
{
    vector<char> terceiro = {'1', '4', '4'};
    int n;
    cin >> n;
    string numero_para_checar = to_string(n);
    if (primeira_checagem(numero_para_checar, terceiro))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}