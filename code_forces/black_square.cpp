#include <cstddef>
#include <iostream>

using std::cin, std::cout, std::string;

int main()
{
    int a[4];
    for(int i{0}; i < 4;++i)
        cin >> a[i];
    string s;
    cin >> s;
    int sum = 0;
    for(int i{0}; i < s.length();++i)
        // first we convert s[i] current char in the string to int
        // the we access the array with the idex of s[i] - 1 (we subtruct one because base 0)
        // then we sum the corresbandat value of a
        sum += a[ s[i] - '0' - 1];
    cout << sum << '\n';
    return 0;
}
