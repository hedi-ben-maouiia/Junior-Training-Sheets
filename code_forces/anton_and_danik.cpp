#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int n = 0, count = 0;
    cin >> n;
    int tmp = n; 
    while(tmp--){
        char c;
        cin >> c;
        if(c == 'A')
            count++;
    }
    if(n == 1 && count == 1){
        cout << "Anton\n";
        return 0;
    }
    if(n == 1 && count == 0){
        cout << "Danik\n";
        return 0;
    }
    int res = (n / 2 + (n%2)) - count;
    
    if (res == 0)
       cout << "Friendship\n";
    else if (res < 0)
        cout << "Anton\n";
    else  
        cout << "Danik\n";
}
