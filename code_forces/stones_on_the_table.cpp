#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    char prev;
    std::cin >> prev;
    int count{0};
    while(--n){
        char next;
        std::cin >> next;
        if(next == prev){
            count++;
        }
        prev = next;
    }
    std::cout << count <<"\n";
    return 0;
}
