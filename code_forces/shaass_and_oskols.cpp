#include <iostream>

using std::cin, std::cout;


int main()
{
    int n,m,x,y;
    cin >> n;
    int a[n];
    for(int i{0}; i<n;++i)
        cin >> a[i];
    cin>>m;

    for(int i{0};i<m;++i){
        cin >> x >> y;
        x--;

        if(x != 0){
            a[x-1] += y - 1;
        }

        if(x != n-1){
            a[x+1] += a[x] - y;
        }

        a[x] = 0;
    }

    for(auto n : a)
        cout << n << "\n";

    return 0;
}
