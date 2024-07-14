#include <iostream>
#include <set>


int main()
{
    std::string s;
    std::set<char> s_str;
    std::cin >> s;
    for(auto c : s)
        s_str.insert(c); // we will insert only the distinct value in the set.
                         // Ex: xiaodao the s_str will be {x,i,a,o,d};


    if(s_str.size() % 2 == 0) // check if the length of the  s_str is even
        std::cout << "CHAT WITH HER!\n";
    else
        std::cout << "IGNORE HIM!\n"; // else is odd
    return 0;
}
