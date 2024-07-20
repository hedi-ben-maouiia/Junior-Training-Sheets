#include <iostream>
#include <sstream>
#include <vector>

#define range(a,b) for(int i={a}; i < b; ++i)

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void solve()
{
    int n;
    std::cin >> n;
    std::string s;
    std::vector<std::string> res;
    while(n--){
        std::cin >> s;
        std::ostringstream oss;
        if(s.length() > 10){
            oss << s[0] << s.length() - 2 << s[s.length()-1];
            std::cout << oss.str() << '\n';

        }
        else
            std::cout << s << '\n';
    }
}

int main()
{
    speed();
    solve();
    return 0;
}
