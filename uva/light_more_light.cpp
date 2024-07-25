#include <iostream>
#include <cmath>

#define range(a,b) for(int i={a}; i < b; ++i)
using std::cin, std::cout;

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void solve()
{
    int n;
    while( cin >> n && n != 0){
        int q = sqrt(n);
        if(q * q == n)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}

int main()
{
    speed();
    solve();
    return 0;
}

