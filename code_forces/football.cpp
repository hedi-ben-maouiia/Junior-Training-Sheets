#include <iostream>
#include <map>
using namespace std;
 
 
int main()
{
    // 2 team in total 
    int n; cin >> n;
    map<string, int> teams;
    for(int i = 0; i < n;++i){
        string t;
        cin >> t;
        if(n ==  1){
            cout << t <<"\n";
            return 0;
        }            
        teams[t]++;
    }
    auto firstTeam  =   teams.begin(); 
    auto secondTeam = ++teams.begin(); 
 
    if(firstTeam->second > secondTeam->second)
        cout << firstTeam->first;
    else 
        cout << secondTeam->first;
    return 0;
}
 
