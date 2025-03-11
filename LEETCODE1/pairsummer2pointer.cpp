//  we wil be doing pair sum but with two pointer approach



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> pairsum(int array[], int size, int target){
int i = 0;
vector<int> result;

sort(array,array+size);
// meri jan ke tote rem always two pointer approach works on only sorted arrays


//  now do visualization

// array=[1,2,3,4,5];
// alright so now lets make j start from one ahead of i

int j  = 0;
while (i < size && j < size)
{
    int sum = array[i] + array[j];
    //  for 1st iteration
    // sum = 1+2 = 3 this will go to else if block so
    // sum now equal to 1+3 = 4 this will keep happening till targetis found 
    // so when j = 8 then target will be fulfilled and now j is reset the if block rund
    // now 1 and 9 are aded to the result now i is now set to 1 from 0 and j is set to i+1 meaning 2
    // now sum = 2+3 = 5 not target hence will keep on running hence the similar way it will run until the target is found 
     if (sum == target)
     {
        //  see when they are equal visualize both are equal so hence the next sum must be ahead so we increment i and j both 
        result.push_back(array[i]);
        result.push_back(array[j]);
        i++;
        j = i+1;
     }
     else if (sum < target){
        j++;
        // now see when the sum is less than target ow due to the fact that this is a sorted array hence we know that the target will only be found if we increase j
        // like check i with the number more ahead 
     }
     else{
        i++;
        j = i+1;
        // meri jan dekho ab isme jab sum is greater than target to obviously age hi dekhen ge ham
     }
     
}
return result;
}

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};  
    int target = 10;
vector <int> result = pairsum(array,10,target);
cout<<"The pairs that match up to the target "<<target<<": ";

cout << "Pairs that sum up to " << target << ": ";
for (int i = 0; i < result.size(); i += 2) {  // Increment by 2 since we're storing pairs
    cout << "(" << result[i] << ", " << result[i + 1] << ") ";
}
}