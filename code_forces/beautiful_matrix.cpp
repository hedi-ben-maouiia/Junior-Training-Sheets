#include <iostream>
#include <cmath>

using namespace std;


int main(void)
{

    int one,res = 0;
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cin >> one;
            if(one == 1)
                res = abs(2-i) + abs(2-j);      
        }
    }
    cout << res << "\n";
    return 0;
}
