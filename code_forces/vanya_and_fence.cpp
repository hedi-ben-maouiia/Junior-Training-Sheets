#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    // n = number of freids , h = height of the wall , a = a[i] of the friends , count = number of a[i] that a[i] > h
    int n,h,a,count;
    n = h = a = count = 0;
    cin >> n >> h;
    int tmp = n;
    while(tmp--){
        cin >> a;
        if(a > h)
            count++;
    }
    cout <<  n + count << "\n"; 
    return 0;
}
