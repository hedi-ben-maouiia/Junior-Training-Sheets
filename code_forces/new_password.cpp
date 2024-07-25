#include <iostream>

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
    int n,d;
    cin >> n >> d;
    std::string pass;
    for(char a='a';a < d + 'a';++a){pass.push_back(a);}
    int rest = n - pass.length();
    int j = 0;
    for(int i = 0; i < rest ;++i){
       if(j == pass.length())
            j = 0;
        pass.push_back(pass[j++]);
    }

    cout << pass << '\n';
}

int main()
{
    speed();
    solve();
    return 0;
}
