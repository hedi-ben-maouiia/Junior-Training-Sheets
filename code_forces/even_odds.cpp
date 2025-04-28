#include <iostream>

using namespace std;
    
long long even_or_odd(long long n)
{
    long long rem = n % 2;
    return (n / 2 ) + rem;
}

int main(void)
{
    long long n,k; 
    long long result = 0;
    bool even = false;
    cin >> n >> k;
    long long indecator = even_or_odd(n); 
    if(k > indecator)
        k -= indecator, even = true;
    even ?  result = k * 2 : result = k * 2 - 1;
    cout << result << "\n";
}


