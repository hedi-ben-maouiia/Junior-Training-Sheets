#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    vector<int> v;
    int t = n;
    while(t--)
    {
        cin >> a >> b;
        v.push_back(a); 
        if(a != b){
            cout << "rated\n";
            return 0;
        }
    }
    for(int i = 1; i < n; i++){
        if(v[i] > v[i-1]){
            cout << "unrated\n";
            return 0;
        }
    }
    cout << "maybe\n";
    return 0;
}
