#include <iostream>
using std::cout, std::cin;


int main()
{
    int n;
    cin >> n;
    int c[n][2];
    for(int i{0}; i < n;++i){
        for(int j{0}; j < 2; ++j)
                cin >> c[i][j];
    }
    int count = 0;
    for(int i{0};i<n;++i){
        for(int j{0};j<n;++j){
            if(c[i][0] == c[j][1]){
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}
