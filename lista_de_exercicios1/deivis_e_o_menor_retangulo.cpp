#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    char matriz[m][n];
    int a = 0;
    int b = 0;
    int primeira_aparicao = 1;
    int menor_a = 0;
    int menor_b = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
            if(primeira_aparicao == 1 && matriz[i][j] == '1')
            {
                menor_a = i;
                menor_b = j;
                primeira_aparicao = 0;
            }
            if (matriz[i][j] == '1' && i <= menor_a)
            {
                menor_a = i;
            }
            if (matriz[i][j] == '1' && j <= menor_b)
            {
                menor_b = j;
            }
            if (matriz[i][j] == '1' && i >= a)
            {
                a = i + 1;
            }
            if (matriz[i][j] == '1' && j >= b)
            {
                b = j + 1;
            }
        }
    }
    cout << b - menor_b << "x" << a - menor_a;

    return 0;
}