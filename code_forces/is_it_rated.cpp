#include <iostream>

using namespace std;

int main()
{
    int n,a,b,tmp=5000; 
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a!=b){
            cout << "\nrated\n";
            return 0;
        }
        if(a > tmp){
            cout << "unrated\n";
            return 0;
        }
        tmp = a;
    }
    cout << "maybe\n";
    return 0;
}
