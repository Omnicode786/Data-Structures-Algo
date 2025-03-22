

#include <bits/stdc++.h>
using namespace std::chrono; 
using namespace std;
int guess(int n){
    if (n > 6)
    {
        return -1;
    }
    else if (n < 6){
        return 1;
    }
    else{
        return 0;
    }
    
}


int guessNumber(int n) {
    int low = 0, high = n;
    while (low <= high){
    int mid = (low+(high-low)/2);

        if (guess(mid) == -1){
            high--;
        }
        else if(guess(mid) == 1){
            low++;
        }
        else{
            return mid;
        }
    }
        return -1;
}

// Updates low = mid + 1 or high = mid - 1 to properly eliminate half the range each time.

int guessNumberBinary(int n) {
    int low = 0, high = n;
    while (low <= high){
    int mid = (low+(high-low)/2);

        if (guess(mid) == -1){
            high = mid-1; // when guess is higher we exclude the right part completely which is larger so now we start from mid -1 
        }
        else if(guess(mid) == 1){
            low = mid+1; // when the guess is lower than pick we exlude the left part completely and now start from mid+1 as else statement did not run so mid is also not the picked number
        }
        else{
            return mid;
        }
    }
        return -1;
}
        //  works but takes a lot of time 
        //  basically in a binary search we have to make sure we exclude one part which we dont need completely
        

        int main()
{
    auto start1 = high_resolution_clock::now();
    int value = guessNumber(1000000000);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);

    auto start2 = high_resolution_clock::now();
    int value1 = guessNumberBinary(-1000);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);

    cout << "Value from algo 1: " << value << ", Value from algo 2: " << value1 << endl;
    cout << "Time taken by algo 1: " << duration1.count() << " ns, "
         << "Time taken by algo 2: " << duration2.count() << " ns" << endl;}
