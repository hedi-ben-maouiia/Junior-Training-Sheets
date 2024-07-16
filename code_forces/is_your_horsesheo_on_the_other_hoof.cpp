#include <iostream>
#include <unordered_set>

using std::cin ,std::cout, std::unordered_set;


int main()
{
    unordered_set<size_t> set;
    size_t a;
    for(int i{0}; i < 4;++i)
        cin >> a , set.insert(a);
    cout << 4 - set.size() << "\n";
    return 0;
}
