#include <cctype>
#include <iostream>
#include <map>

using std::cin, std::cout;

void solve()
{
    std::map<char,int> apper;
    for(char i='a'; i <= 'z';++i)
        apper[i] = -1;

    std::string ans;
    int n;
    cin >> n;

    std::string s;
    cin >> s;
    if(n < 26) {
        cout << "NO\n";
        return;
    }
    for(auto& c:s){
        apper[tolower(c)] = 1;
    }
    for(auto &c : apper){
         if(c.second == -1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    solve();
    return 0;
}
