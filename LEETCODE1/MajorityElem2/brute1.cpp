#include<bits/stdc++.h>

using  namespace std;

vector<int> majorityElemII(int array[],int n){
    vector <int> list;
    
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (list.size() == 2)
        {
            return list;
        }
        if (list.empty() || list[0] != array[i])
        {
            for (int j = 0; j < n; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                }
                
            }

            
        }
        if (count > n/3)
        {
            list.push_back(array[i]);
        }
        
    }
    return list;
    


}

int main(){

    int array[9] = {1,1,2,2,2,3,3,3,3};
    vector<int> majorityelems = majorityElemII(array,9);
    for (auto it:majorityelems){
        cout<<it<<" ";
    }
    cout <<endl;

}