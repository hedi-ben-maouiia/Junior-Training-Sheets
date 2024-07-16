#include <iostream>
#include <stack>
using std::cin, std::cout, std::string;

int main()
{
    int n,i;
    std::stack<int> st;
    cin >> n;
    int rec = 0;
    while(n--){
        cin >> i;
        if(i == -1)
            st.push(i);

        if(rec > 0 && i == -1)
            st.pop(),--rec;

        if(i >= 1){
            rec += i;
        }
    }
    cout << st.size() << "\n";
    return 0;
}
