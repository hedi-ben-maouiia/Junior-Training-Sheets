#include<iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for(int i{0}; i < n; ++i)
        std::cin >> arr[i];

    int first = 0, last = n-1; // two pointer for the first and last elem of array
    int dime_sum = 0;          // sum of card that dima take
    int sereja_sum = 0;        // sum of card that sereja take
    bool sereja_turn = true;   // to decide turn either sereja or dima

    while(first <= last){

        if(arr[first] >= arr[last]){
            if(sereja_turn){
                sereja_sum += arr[first++];
                sereja_turn = false;
            }
            else{
                dime_sum += arr[first++];
                sereja_turn = true;
            }
        }

        else if(arr[last] >= arr[first] ){
            if(sereja_turn){
                sereja_sum += arr[last--];
                sereja_turn = false;
            }
            else{
                dime_sum += arr[last--];
                sereja_turn = true;
            }
        }
    }
    std::cout << sereja_sum << " " << dime_sum << "\n";
}
