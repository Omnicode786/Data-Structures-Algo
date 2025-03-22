#include <bits/stdc++.h>
using namespace std;
        bool checkIfExist(vector<int>& arr) {
            int size = arr.size();
            for (int i = 0; i < size; i++){
                for (int j = 0; j < size; j++){
           
                if ( i!=j && arr[i] == 2*arr[j]) return true;
                }}
            
            return false;
        }
 

        int main()
        {
            vector <int> array = {2,3,21,0,23};
            cout << checkIfExist(array);
        }