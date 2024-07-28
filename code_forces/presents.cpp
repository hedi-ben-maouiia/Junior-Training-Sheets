#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using std::cin, std::cout;

void speed()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
bool cmp(std::pair<int,int> &a , std::pair<int,int>&b)
{
    return a.first < b.first;

}
void solve()
{
    const int MAX = 100;
    int n;
    cin >> n;
    std::vector<std::pair<int,int>> arr;

    for(int i{0}; i < n; ++i){
        int p;
        cin >> p;
        std::pair<int,int> pr =  std::make_pair(p,i+1);
        arr.push_back(pr);
    }

    std::sort(arr.begin(),arr.end(),cmp);

    for(const auto &a : arr)
        cout << a.second << " ";
    cout << "\n";
}
int main()
{
    speed();
    solve();
    return 0;
}
