#include <iostream>


using std::cin, std::cout;


int main()
{
    int n,b,d;
    cin >> n >> b >> d;
    int a[n];
    size_t sum = 0;
    int count = 0;
    for(int i{0}; i<n;++i ){
        cin >> a[i];
        if(a[i] > b)
            continue;
        sum += a[i];
        if(sum > d){
            count++;
            sum = 0;
        }
    }
    cout << count << "\n";
    return 0;
}
