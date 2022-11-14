#include <bits/stdc++.h>
#define ii pair<int, int>
#define pb push_back
using namespace std;

bool comparacao(ii a, ii b)
{
    if (a.first < b.first)
        return true;
    return false;
}
bool comparacao1(ii a, ii b)
{
    if (a.second < b.second)
        return true;
    return false;
}
int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ii> v;
    int movies_watched = 0;
    int actual_time = 0;
    for(int i = 0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb(ii(a, b));
    }
    sort(v.begin(), v.end(), comparacao);
    sort(v.begin(), v.end(), comparacao1);
    for(int i = 0; i<v.size(); i++)
    {
        if(i == 0){
            movies_watched++;
            actual_time = v[i].second;
        }
        else if(v[i].first >= actual_time)
        {
            movies_watched++;
            actual_time = v[i].second;
        }
    }
    cout << movies_watched;
    return 0;




}