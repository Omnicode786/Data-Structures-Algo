#include <iostream>
using namespace std;

void next(int array[], int n) {
    // Sabse pehle, variables set karte hain jo next permutation ke liye chahiye.
    int lastIndex = -1;
    int nextindex = 0;

    // Ye loop main kaafi soch samajh ke likha hai: main pehle wo element dhundh raha hoon
    // jo apne agle element se chhota ho, matlab wo "pivot" point jo humare permutation ko badalne waala hai.
    for (int i = n - 2; i >= 0; i--) {
        if (array[i] < array[i + 1]) {
            lastIndex = i;  // Ye wo element hai jisko swap karna hai.
            nextindex = i + 1;  // Ye wo element hai jo swap hoga.
            break;  // Jab mil gaya, toh aur dekhne ka time waste nahi karna.
        }
    }

    // Agar lastIndex abhi bhi -1 hai, iska matlab array already largest permutation hai,
    // toh ab hum reverse karenge array ko taake smallest permutation mile.
    if (lastIndex == -1) {
        for (int i = 0; i < n / 2; i++) {
            swap(array[i], array[n - i - 1]);  // Poore array ko reverse karna.
        }
        return;  // Bas, ab kuch aur karne ki zaroorat nahi hai.
    }

    // Ab jo elements lastIndex aur nextindex pe hain, unko swap karna hai.
// Hum yeh swap isliye kar rahe hain taake hum permutation ko thoda bada bana sakein.
// Yeh step isliye important hai kyunki humne pivot element ko find kiya hai,
// jo lastIndex pe hai, aur hum nextIndex pe jo element hai, usse swap kar rahe hain
// jisse hum permutation ko next larger number bana sakein.
    swap(array[lastIndex], array[nextindex]);

// Ab jo baaki ka part hai, usko smallest lexicographical order mein laana hai.
// Matlab, jo elements lastIndex ke baad hain, unhe reverse karenge,
// taake hum smallest possible order la sakein. Yeh step isliye hai
// kyunki next permutation ke liye, hum jo bhi number chhode hain,
// unhe sorted (smallest) order mein arrange karna zaroori hai.
    int start = lastIndex + 1;
    int end = n - 1;
    while (start < end) {
        swap(array[start], array[end]);  // Start aur end ko swap kar rahe hain.
        start++;
        end--;
    }

    // Apne pehle wale approach mein main do aur loops use karta tha: pehle lastIndex dhundhne ke liye, 
    // aur phir nextindex ke liye. Lekin iss approach mein, dono ka kaam ek hi loop se ho gaya.
    // Tumhare approach mein, yeh kaafi efficient hai kyunki unnecessary extra iteration nahi ho rahi.
    // Matlab, time ka kaafi accha use ho raha hai.

    // Find the smallest element greater than array[lastIndex] and swap them
    // for (int i = n - 1; i > lastIndex; i--) {
    //     if (array[i] > array[lastIndex]) {
    //         swap(array[lastIndex], array[i]);
    //         break;
    //     }
    // }
}

int main() {
    int array[4] = {1, 5, 7, 3};  // Test array daal diya, next permutation chahiye.
    next(array, 4);  // Call kar rahe hain next permutation ko.

    // Result print karte hain, next permutation ka output dekhte hain.
    for (int i = 0; i < 4; i++) {
        cout << array[i] << " ";  // Array ka har element print karenge.
    }

    return 0;
}
