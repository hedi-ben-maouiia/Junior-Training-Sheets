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
    std::string a,b;
    std::cin >> a >> b;
    (a.compare(b) == 0) ? std::cout << -1 << "\n" : std::cout <<  std::max(a.length(),b.length()) << "\n";
}

int main()
{
    speed();
    solve();
    return 0;
}
