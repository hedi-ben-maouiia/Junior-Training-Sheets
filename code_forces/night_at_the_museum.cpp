#include <iostream>
using std::cin, std::cout, std::string;


int main()
{
    string s;
    cin >> s;
    int sum = 0;
    char initialChar = 'a';
    for(int i{0}; i < s.length();++i){
        sum += std::min(abs(s[i] - initialChar),26 - abs(s[i] - initialChar));
        initialChar = s[i];
    }
    cout << sum << '\n';
    return 0;
}
