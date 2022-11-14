#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char **argv)
{
    long long n;
    cin >> n;
    long long sn = (1 + n) * n / 2;

    for (int i = 0; i < n - 1; i++)
    {
        long long x;
        cin >> x;
        sn = sn - x;
    }

    cout << sn;

    return 0;
}
