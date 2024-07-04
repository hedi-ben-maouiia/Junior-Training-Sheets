#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int n,petya,vesya,tonya,count;
    count = 0;
    cin >> n;
    while(n--){
    cin >> petya >> vesya >> tonya; 
        if((petya + vesya + tonya ) >= 2)
            count++;
    }    
    cout << count << endl;
}

