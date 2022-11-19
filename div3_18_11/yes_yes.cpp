#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int checagem = 0;
        if (s.length() == 1)
        {
            if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
            {
                checagem = 0;
            }
            else
            {
                checagem = 1;
                
            }
        }
        else
        {

            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == 'Y' && s[i + 1] == 'e')
                {
                    checagem = 0;
                }
                else if (s[i] == 'e' && s[i + 1] == 's')
                {
                    checagem = 0;
                }
                else if (s[i] == 's' && s[i + 1] == 'Y')
                {
                    checagem = 0;
                }
                else if(s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
                {
                    checagem = 1;
                    break;
                }else{
                    checagem = 1;
                    break;
                }
            }
        }
        if (checagem == 0)
        {
            cout << "YES"<< endl;
        }
        else
        {
            cout << "NO"<< endl;
        }
    }
    return 0;
}