
#include <iostream>
#include <set>
#include <vector>

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
    int n;
    cin >> n;
    std::multiset<short> st;
    std::vector<short> v;
    short arr[3] = {0,0,0};
    short t;
    enum {prog = 1, math=2, sport=3};
    range(0,n){
        cin >> t;
        st.insert(t);
        v.push_back(t);
    }
    int p = 0,m = 0,s = 0;
    for(const auto &a : st){
        if(a == prog)
            p++;
        else if(a == math)
            m++;
        else
            s++;
    }
    int w = std::min(std::min(p,m),s);
    cout << w << "\n";
    while(w--){
        range(0,n){
            if(arr[v[i]-1] == 0 && v[i] != -1)
                arr[v[i]-1] = i+1, v[i] = -1;
        }
        for(const auto &a : arr)
            cout << a << " ";

        arr[0] = 0;
        arr[1] = 0;
        arr[2] = 0;
        cout << "\n";
    }
}

int main()
{
    speed();
    solve();
    return 0;
}
