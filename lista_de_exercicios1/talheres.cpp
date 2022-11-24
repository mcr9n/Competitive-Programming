#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, g, f, c;
    cin >> q >> g >> f >> c;
    int conseguiriam_jantar;
    conseguiriam_jantar = min(g, f);
    conseguiriam_jantar += c;
    if (conseguiriam_jantar >= q)
    {
        cout << q;
    }
    else
    {
        cout << conseguiriam_jantar;
    }

    return 0;
}