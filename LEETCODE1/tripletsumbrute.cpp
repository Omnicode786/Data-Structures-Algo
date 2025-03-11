// brute attempt for triplet sum


#include <iostream>
#include <vector>
using namespace std;

vector<int> tripletsum(int array[], int size, int target){
    vector <int>result;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if ((array[i]+array[j]+array[k] )== target)
                {
                    result.push_back(array[i]);
                    result.push_back(array[j]);
                    result.push_back(array[k]);

                }
                
            }
            
        }
        
    }
    
return result;

}

int main(){

int array[10] = {1,2,3,4,5,6,7,8,9,10};
vector <int> result = tripletsum(array,10,10);
cout <<"The triplet sum is ";
for (int i = 0; i < result.size(); i += 3) {  // Increment by 2 since we're storing pairs
    cout << "(" << result[i] << ", " << result[i + 1] << ", "<<result[i+2]<< ") ";
}




}