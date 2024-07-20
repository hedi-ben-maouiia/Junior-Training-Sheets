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
    std::string s;
    std::getline(std::cin, s);
    std::set<char> st;
    for(auto c : s){
        if('A' <= c && c <= 'z')
            st.insert(c);
    }
    std::cout << st.size() << "\n";
}

int main()
{
    speed();
    solve();
    return 0;
}
