#include <bits/stdc++.h>

using namespace std;

int MAX = 100;
void solve()
{
    int n; cin >> n;
    int a[MAX+1];
    int sum_coins{0};
    for(int i=0; i < n;++i){
        cin >> a[i];
        sum_coins += a[i];
    }
    sort(a,a+n,greater<int>());
    int min_coins = 0;
    for(int i=0;i<n;++i){
        min_coins += a[i];
        int res = sum_coins - min_coins;
        if(min_coins > res){
            cout << i+1 << '\n';
            return;
        }
    }
}

int main(){
    solve();
    return 0;
}
