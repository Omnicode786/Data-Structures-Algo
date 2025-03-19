#include <bits/stdc++.h>
using namespace std;

bool isPerfect(vector<int> &arr) {
    int length = arr.size();
    vector <int> copy = arr;
    for (int i = 0; i < length/2; i++){
            int temp = arr[i];
            arr[i] = arr[length - i -1];
            arr[length - i - 1] = temp;
        
    }
    bool palindrome = true;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != copy[i]){ palindrome = false;
        break;
        }
    }
    return palindrome;


    // EFFICIANT EMETHOD
    // for (int i = 0; i < length / 2; i++) {
    //     if (arr[i] != arr[length - i - 1]) {
    //         return false; // As soon as we find a mismatch, return false
    //     }
    // }
    // return true;

}
int main()
{

    vector <int> array = {1,3,3,2,3,1};
    cout << isPerfect(array);


}