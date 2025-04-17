#include <bits/stdc++.h> // Sab kuch include ho jayega, no tension.
using namespace std;

int Betterusingmap(int array[], int size, int k) {
    int sum = 0;  // Current sum track karne ke liye
    map<int, int> prefixMap; // {sum -> index} ko store karega 
    int maxLength = 0; //  Sabse lambi valid subarray ki length yahan store hogi

    for (int i = 0; i < size; i++) {
        sum += array[i]; // 🔥 1️⃣ Har step pe sum update kar do
        
        // Agar sum khud hi k ke barabar ho gaya, toh full subarray valid hai
        if (sum == k) {
            maxLength = max(maxLength, i + 1); // Max length ko update karo
        }

        int rem = sum - k; // Rem = sum - k nikal lo (ye past me exist hona chahiye)

        //  4Dekho ki ye "rem" pehle kabhi aaya tha kya
        if (prefixMap.find(rem) != prefixMap.end()) {  
            // 🔥 Mil gaya rem! iska matalab ye hai ki prefixMap[rem] ke baad ka portion sum = k de raha hai
            int len = i - prefixMap[rem]; //  Length nikali (start = prefixMap[rem] + 1, end = i)
            maxLength = max(maxLength, len); //  Max update
        }

        //  Sirf pehli baar aane wala sum store karna hai (pehli occurrence important hai!)
        //  basically sum exist ni krta to store krlo smjhe
        // also check for the farthest sum mtlb agr aik bar left se arhe hen or sum store krdia ab phir se agr wohi sum ajaye to use store na kren kuke we want the longest subarray
        if (prefixMap.find(sum) == prefixMap.end()) { 
            prefixMap[sum] = i; // Pehli baar mila toh store kar lo
        }
    }

    return maxLength; //  Finally, longest subarray ki length return kar do
}

int main() {
    int a[8] = {1, 1, 2, 3,-1,-1,3, 2}; // Test case
    int n = Betterusingmap(a, 8, 99); // K = 2 ka longest subarray dhundo
    cout << n; // Expected output: 2 (kyunki [1,1] longest valid subarray hai)
}

//  thid id hr btter one for positive ones and a optimal for positve negative and 0s


// Step 1: Track sum as we traverse
// Har index pe sum ko update karte chalo.

// Dekho agar sum == k ho gaya, toh poora array valid hai.

//  Step 2: Find if "rem" exists in map
// rem = sum - k ka matalab hai ki agar pehle kahi rem mila ho, toh uske baad ka portion sum k ka hoga.

// Agar prefixMap[rem] exist karta hai, iska matalab ye hai ki rem tak jo sum tha, woh remove karke bacha hua sum k ban raha hai.

// Step 3: Store first occurrence in map
// Sirf pehli baar aane wala sum store karo!

// Kyunki agar koi sum pehle bhi aaya ho, toh uski first occurrence sabse left wala index degi, jo max length banane me madad karega.