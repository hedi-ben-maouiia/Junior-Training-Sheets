#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int mag[n];
    int group_count = 1;
    int test = 0;
    for(int i{0}; i < n;++i){
        std::cin >> mag[i];
        if(test && mag[i] != mag[i-1])
            ++group_count;
        test = 1;
    }
    std::cout << group_count << '\n';
    return 0;
}
