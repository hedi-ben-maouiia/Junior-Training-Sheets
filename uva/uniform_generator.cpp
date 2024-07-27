#include <cstring>
#include <iomanip>
#include <iostream>
#include <algorithm>
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
    int step,mod,index = 0;
    while(cin >> step >> mod){
        bool vis[mod] = {0};
        bool bad = false;
        for(int i{0};i < mod;++i){
            int seed = (index + step)%mod;
            if(vis[seed] == 1)
            {
                bad = true;
                break;
            }
            vis[seed] = 1;
            index = seed;
        }

        cout << std::setw(10) << step << std::setw(10) << mod << "   ";
        bad ? cout << "Bad Choice\n" : cout << "Good Choice\n";

    }
}

int main()
{
//    speed();
    solve();
    return 0;
}
