#include <bits/stdc++.h>

using namespace std;

void solve()
{
    char direction;
    cin >> direction;
    string res = "",mole_key = "", qwerty_layout = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> mole_key;
    short RL = (direction == 'R') ? -1 : 1;

    for(auto& c : mole_key)
        res.push_back(qwerty_layout[qwerty_layout.find(c) + RL]);

    cout << res << "\n";

}
int main()
{
    solve();
    return 0;
}
