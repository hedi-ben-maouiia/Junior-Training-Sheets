#include <iostream>


std::string to_upper(std::string &s)
{
    for(auto &c : s){
        c = toupper(c);
    }
    return s;
}

std::string to_lower(std::string &s)
{
    for(auto &c : s){
        c = tolower(c);
    }
    return s;
}

int main()
{
    std::string s;
    std::cin >> s;
    int lower_count = 0;

    for(auto &c : s){
        if(c >= 'a')
            lower_count++;
    }
    int middle = (s.length() / 2 ) + (s.length() % 2);

    if(lower_count >= middle)
        std::cout << to_lower(s) << "\n";
    else
        std::cout << to_upper(s) << "\n";

}
