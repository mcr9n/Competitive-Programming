#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> b;
        vector<int> a;
        for (int i = 0; i < 7; i++)
        {
            int a;
            cin >> a;
            b.push_back(a);
        }
        sort(b.begin(), b.end());
        int maior = b[6];
        int menor = b[0];
        int segundo_menor = b[1];
        cout << menor << " " << segundo_menor << " " << (maior - segundo_menor) - menor << endl;
    }

    return 0;
}