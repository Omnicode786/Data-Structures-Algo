#include <iostream>

using namespace std;


    int search(int array[],int size, int target){
        for (int i = 0; i < size; i++)
        {
            if (array[i] == target)
            {
                return i;
            }
            
        }
        return -1;
    }

//  big O (n) is the time complexity of this


int main(){
    int target = 5;
    const int SIZE = 1000;
    int arr[SIZE];

    // Seed for random number generation
    srand(time(0));

    // Fill the array with random numbers (excluding 5)
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;  // Random numbers from 1 to 100
        if (arr[i] == 5) arr[i] = 7; // Ensure 5 doesn't appear randomly
    }
    int randomIndex = rand() % SIZE;
    arr[randomIndex] = 5;

int index = search(arr,SIZE,target);
if (index == -1) return 0;

cout<<arr[index]<<" at " << index;
cout <<endl;


}