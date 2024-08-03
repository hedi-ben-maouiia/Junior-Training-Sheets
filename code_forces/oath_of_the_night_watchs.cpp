#include <iostream>
#include <set>

#define range(a,b) for(int i={a}; i < b; ++i)

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}



void solve()
{
    std::multiset<int> s;
    int n,a,min,max;
    std::cin >> n;
    while(n--)
    {
        std::cin >> a;
        s.insert(a);
    }

    min =*s.begin();
    max =*s.rbegin();

    int cnt = 0;
    for(const auto &c : s){
        if(min < c && c < max)
            cnt++;
    }
    std::cout << cnt << "\n";
}

int main()
{
    speed();
    solve();
    return 0;
}
