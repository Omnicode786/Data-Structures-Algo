#include  <bits/stdc++.h>
using namespace std;

// Function to count number of valid pairs where nums1[i] > nums2[j]
int countinversion(vector<int> nums1, vector<int> nums2, int m, int n) {
    int left = 0;     // Pointer for nums1
    int right = 0;    // Pointer for nums2
    int count = 0;    // Total valid pairs

    // Loop through each element of nums1
    while (left < m) {

        //  Jab tak nums1[left] > nums2[right], tab tak right++ karte jao
        // Ye basically ye dekh raha hai ke is nums1 ke element ke sath kitne nums2 ke elements chhote hain
        while (right < n && nums2[right] < nums1[left]) {
            right++;
        }

        //  Ab jo right index tak pahunch gaye hain, wo saare nums2 ke elements current nums1[left] se chhote hain
        // Toh in sab ke sath valid pairs banenge
        count += right;

        // 🤝 Next nums1 element check karne ke liye left++
        left++;
    }

    return count;
}

int main() {
    vector<int> nums1 = {1, 3, 5, 7};  // Sorted array
    vector<int> nums2 = {2, 4, 6, 8};  // Sorted array

    int m = nums1.size();
    int n = nums2.size();
    
    //  Count all valid inversion-like pairs
    int number = countinversion(nums1, nums2, m, n);
    
    // Print the result
    cout << number << endl;

    return 0;
}
