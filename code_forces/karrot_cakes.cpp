#include <iostream>

#define range(a,b) for(int i={a}; i < b; ++i)

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void solve()
{
    int n,t,k,d;
    std::cin >> n >> t >> k >> d;
    int kar = (n+k-1) / k;
    int o1,o2;
    o1 = 0;
    o2 = d;

    range(0,kar){
        if(o1 <= o2) o1 += t;
        else o2 += t;
    }

    if(std::max(o1,o2) < kar * t)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main()
{
    speed();
    solve();
    return 0;
}
