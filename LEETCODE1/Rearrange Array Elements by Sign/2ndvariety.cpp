#include <bits/stdc++.h> 

using namespace std;

void Rearranger(vector <int> &arr){
    int n = arr.size();
    vector <int> pos;
    vector <int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) neg.push_back(arr[i]);
        else pos.push_back(arr[i]);
    }
    
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
        
    }
    else{
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }
    




}


int main(){

vector <int> array = {2,-3,4,2,1,-6,-9,-9,11,12,-99,33,12,11,9};
Rearranger(array);
for (auto it:array){
    cout <<it<<" ";
}

}