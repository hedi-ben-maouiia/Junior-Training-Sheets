#include <cstring>
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
    const int MAX = 600;
    int prod[MAX];
    std::string n,n2;
    while(cin >> n){
        cin >> n2;

        std::reverse(n.begin(), n.end());
        std::reverse(n2.begin(), n2.end());

        memset(prod, 0 ,sizeof(prod));

        for(int i=0;i < n.length();++i){
            for(int j=0;j < n2.length();++j){
                prod[i + j]     += (n[i] - '0') * (n2[j] -'0');
                prod[i + j + 1] += prod[i + j] / 10;
                prod[i + j]      = prod[i+j] % 10;
            }
        }

        int i = MAX - 1;
        while(i > 0 && prod[i] == 0){--i;} // Don't count the 0

        for(int k = i; k >= 0; --k)
            cout << prod[k];
        cout << "\n";
    }
}

int main()
{
//    speed();
    solve();
    return 0;
}
