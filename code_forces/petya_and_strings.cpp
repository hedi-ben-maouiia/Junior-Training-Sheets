#include <iostream>
#include <ctype.h>

using  std::string ,std::cin ,std::cout;

void to_upper(string &s)
{
    for(int i{0}; i < s.length();++i){
        s[i] = toupper(s[i]);
    }
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2 ;
    to_upper(s1), to_upper(s2);

    int res = s1.compare(s2);

    if(res == 0)
        cout << "0\n";
    else if(res < 0)
        cout << "-1\n";
    else
        cout << "1\n";

    return 0;
}
