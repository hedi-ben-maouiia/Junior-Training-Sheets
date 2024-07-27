#include <cstring>
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
    int row,col, cor;
    while(cin >> row >> col >> cor && row != 0){
        cout <<  ((row - 7) * (col - 7) + cor) / 2 << '\n';
    }
}
int main()
{
    speed();
    solve();
    return 0;
}
