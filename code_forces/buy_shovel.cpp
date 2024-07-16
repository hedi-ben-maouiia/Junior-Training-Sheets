#include <iostream>

using std::cin , std::cout ;

int main()
{
    int price;
    int coins;
    cin >> price >> coins;
    int count = 1;
    while(((price * count) % 10) != 0 && ((price * count) % 10) != coins){count++;}
    cout << count << "\n";
}
