#include <iostream>
#include <queue>

#define range(a,b) for(int i={a}; i < b; ++i)

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void solve()
{
    int n,ai,tmp;
    std::priority_queue<int> s;
    std::cin >> n;
    tmp = n;
    for(int i=0 ;i < tmp;++i)
    {
        std::cin >> ai;
        s.push(ai);
        while(!s.empty() && s.top() == n){
            std::cout << s.top() << " ";
            s.pop();
            n--;
        }
        if(ai != n)
            std::cout << std::endl;
    }
}

int main()
{
    speed();
    solve();
    return 0;
}
