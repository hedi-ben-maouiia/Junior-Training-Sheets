#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int a , b, count = 1;
    cin >> a >> b;
    while(count++){
        if((a *= 3) > (b *= 2)){
            break;
        }
    }
    cout << count - 1  << "\n";
    return 0;

}
