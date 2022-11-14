#include <bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin >> n;
while(n != 1){


if(!(n % 2 == 0)){
    n = (n * 3) + 1;
    if(n == 1){
        cout << n;
    }else{
        cout << n << " ";

    }

}else{
    n = n / 2;
    if(n == 1){
        cout << n;
    }else{
        cout << n << " ";

    }


}
}




}
