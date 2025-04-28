#include <iostream>
#include <set>
using namespace std;


int main()
{
    int n,x ,y,p,q ;
    set<int> s;
    cin >> n;
    cin >> x;

    while(x--){
        cin >> p;
        s.insert(p);
    }
    cin >> y;
    while(y--)
    {
        cin >> q;
        s.insert(q);
    }
    (s.size() == n) ? cout <<"I become the guy." : cout << "Oh, my keyboard!";    
    return 0;
}
