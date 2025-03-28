#include <bits/stdc++.h>


using namespace std;


vector <int> intersectionBrute(int array1[], int array2[], int size1, int size2){


    vector <int> result;
    for (int i = 0; i < size1; i++)
    {
        int element = array1[i];
        for (int j = 0; j < size2; j++)
        {
            if (array2[j] > element) break;
            if ( element == array2[j])
            {
                if ((result.empty() || result.back() != element))
//                 result.back() != element before checking if result is empty

// If result is empty, calling result.back() will cause undefined behavior.

// Fix: Check if result is empty before accessing back().
                {
                    result.push_back(element);
                }
                
                
                array2[j] = INT_MIN;  
                break;
            }
                        
        }
        
    }
    return result;
}


int main(){
int num1[5] = {1,2,3,4,5};
int num2[5] = {1,3,4,5,6};
vector <int> intersection = intersectionBrute(num1,num2,5,5);
for (auto it:intersection){
    cout <<it<<" ";
}

}