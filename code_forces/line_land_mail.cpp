#include <iostream>
#define range(a,b) for(int i={a}; i < b; ++i)
typedef long long ll;
using std::cin, std::cout;

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
ll abs(ll a)
{
    return (a < 0) ? -a : a;
}
void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for(int i{0}; i < n;++i){
        cin >> arr[i];
    }
    for(int i{0}; i < n;++i)
    {
        ll max=0, min=0;

        max = std::max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1]));
        if(i==0)
            min =  abs(arr[i+1] - arr[i]);
        else if(i==n-1)
            min = abs(arr[i] - arr[i-1]);
        else
            min = std::min(abs(arr[i] - arr[i-1]),abs(arr[i+1]-arr[i]));

        cout << abs(min) << " " << abs(max) << "\n";
    }
}

int main()
{
    speed();
    solve();
    return 0;
}
