#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    vector<int> prices;
    int contador = 0;
    for(int i = 0; i < n; i++){
        int price_of_drink;
        cin >> price_of_drink;
        prices.push_back(price_of_drink);
    }
    sort(prices.begin(), prices.end());
    int q;
    cin >> q;
    vector<int> days;
    for(int i = 0; i < q; i++){
        int day;
        cin >> day;
        days.push_back(day);
    }
    reverse(days.begin(), days.end());
    while(q--){
        contador = upper_bound(prices.begin(), prices.end(), days[q]) - prices.begin();
        cout << contador << endl;
    }
    

    return 0;
}