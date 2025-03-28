#include <bits/stdc++.h>

using namespace std;

vector<int> OptimalIntersection(int array1[], int array2[], int m, int n)
{

    vector<int> result;
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (array1[i] == array2[j])
        {
            if (result.empty() || result.back() != array1[i])
            {
                result.push_back(array1[i]);
               
            }
            i++;
            j++;
        }
            else if (array1[i] < array2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    
    return result;
}

int main(){

    int array[5] = {1,2,3,4,5};
    int arrat2[5] = {2,3,4,6,7};
    vector <int> reuslt = OptimalIntersection(array,arrat2,5,5);
    for (auto it:reuslt){
        cout << it<<" ";
    }

}



