#include <iostream>

using std::cin, std::cout, std::string;


int main()
{
    string instructions,stones;
    cin  >> stones >> instructions;
    int i =  0;
    for(auto ins : instructions){
        if(stones[i] == ins)
            ++i;
    }
    cout << i + 1 << "\n";

    return 0;
}
