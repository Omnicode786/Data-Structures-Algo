#include <bits/stdc++.h>

using namespace std;

int countinversion(vector<int> nums,vector<int> nums2, int m, int n){
    int left = 0;
    int right = 0;
    int count = 0;
    while (left < m && right < n)
    {
        if (nums[left] > nums2[right])
        {
            right++;
        }
        else{
            count += right;
            left++;
        }
        
    }
    while (left < m)
    {
            count += right;
            left++;
    }
    return count;
    
}
// Ab dekho agar nums1[left] > nums2[right] ho gaya to simple si baat hai,
// k har wo element jo nums2 ke 0 se leke right tak hain, wo chhote honge is nums1[left] se.
// To jitne bhi elements nums2 ke 0 se right-1 tak hain, un sab ke saath ye valid pair bana raha hai.
// To count += right kar denge, kyunke 0 se leke right-1 tak total 'right' elements hue.

// Lekin agar nums1[left] <= nums2[right] ho gaya,
// iska matlab hai k ab left wala element kisi ke saath pair ni bana pa raha.
// To ab is left element ka kaam khatam, isne jitne pairs banane the bana liye.
// Ab left++ kar denge, agle element pe chalayenge.

// Ab right ko phir se 0 reset kyun ni karte?
// Iska reason ye hai k arrays sorted hain,
// to agla nums1 ka element pehle wale se bara hi hoga ya barabar,
// to agar wo nums2[right] se pair nahi bana saka to pehle wale se to bilkul bhi nahi banayega.
// Isliye right ko wahi se continue karte hain jahan se chhoda tha.

// Jab bhi valid pair nahi milta, to else mein left++ to karte hi hain,
// lekin uss waqt count += right bhi karte hain,
// kyunke uss left element ne pehle jitne valid right wale element the un sab ke saath pair bana liya tha.

// Ab ek aur edge case handle karna hota hai,
// agar nums2 ka pura array traverse ho gaya lekin nums1 mein elements baqi hain,
// to iska matlab ye baqi ke sare elements nums2 ke har element se bade hain.
// To har ek nums1 ke element ke liye 'n' valid pairs banenge (kyunke nums2 size n ka hai).

// Isliye finally ek loop chala dete hain: while(left < m) count += n, left++;

// Ye loop nums2 exhaust hone par lagta hai.
// Agar nums1 exhaust ho jaye to koi scene nahi, already sab pair ban gaye hote hain.

int main() {
    vector<int> nums1 = {1, 3, 5, 7};
    vector<int> nums2 = {2, 4, 6, 8};
    int m = nums1.size();
    int n = nums2.size();
    
    int number = countinversion(nums1, nums2, m, n);
    cout << number << endl;

    return 0;
    // the answer should be 4, because the valid pairs are:
    // (1, 2), (1, 4), (3, 2), (3, 4) 
}
