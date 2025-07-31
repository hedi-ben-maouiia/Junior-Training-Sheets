#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,t;
    cin >> n >> t;
    if(n == 1 && t == 10){
        cout << "-1\n";
        return 0;
    }
    vector<int> v;
    while(n--){  
        if(t == 10){
            v.push_back(1);
            v.insert(v.end(), n, 0);
            break;
        }
        v.push_back(t);
    }
    for(auto &i : v)
        cout << i;
    cout << "\n";
}
