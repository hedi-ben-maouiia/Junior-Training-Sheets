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
    int n;
    size_t x;
    std::cin >> n >> x;
    char sign;
    size_t number;
    int stress = 0;
    while(n--)
    {
        std::cin >> sign >> number;
        if(sign == '+')
            x += number;
        else {
            if(number > x){
                stress++;
                continue;
            }
            x -= number;
        }

    }
    std::cout << x << " " << stress << '\n';
}

int main()
{
    speed();
    solve();
    return 0;
}
