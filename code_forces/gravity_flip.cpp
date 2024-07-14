#include <algorithm>
#include <iostream>

using namespace std;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main(void)
{
    int n; 
    cin >> n;
    int orig[n]; 
    for(int i=0;i<n;++i)
        cin >> orig[i];

    sort(orig,orig+n);
    print_array(orig,n);
}

