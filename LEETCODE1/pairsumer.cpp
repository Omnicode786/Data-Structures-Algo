// basically the question is pair sum

//  we are given an array now this array has numbers in it and then  we have to see if thiese number sum up to the given target


//  brute force


#include <iostream>
#include <vector>
using namespace std;

vector <int> pairsum(int array[], int target, int size){

    vector<int> pair;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if ((array[i] + array[j]) == target)
            {
                pair.push_back(array[i]);
                pair.push_back(array[j]);

            }
            
        }
        
    }
 return pair;   
}


int main(){

int array[9] = {0,-1,3,5,1,2,3,4,6};
int target = 5;
vector <int> result = pairsum(array, target, 9);

cout << "Pairs that sum up to " << target << ": ";
for (int i = 0; i < result.size(); i += 2) {  // Increment by 2 since we're storing pairs
    cout << "(" << result[i] << ", " << result[i + 1] << ") ";
}
}

