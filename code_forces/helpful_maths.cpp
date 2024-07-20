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
    std::cin >> s;
    std::multiset<char> st;
    for(const auto &c : s){
        if(c != '+')
            st.insert(c);
    }
    int i = 0;
    for(auto it = st.begin(); it != st.end(); ++it,i++){
        std::cout << *it ;
        if(i != st.size() - 1)
            std::cout << '+';
    }
}

int main()
{
    speed();
    solve();
    return 0;
}
