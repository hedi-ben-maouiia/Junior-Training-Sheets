#include <iostream>
#include <cmath>

using std::cin, std::cout;


int main()
{
    int y,w;
    cin >> y >> w;
    int  dot = 6 - std::max(y,w) + 1;
    int B = 6;
    if(dot == 6)
        cout << "1/1\n";
    else if(2 == dot)
        cout << "1/3\n";
    else if(dot == 4)
        cout << "2/3\n";
    else if( dot == 3)
        cout << "1/2\n";
    else
        cout << dot << "/" << B << "\n";

    return 0;
}
