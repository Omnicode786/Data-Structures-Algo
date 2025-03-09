#include <iostream>
#include <vector>
using namespace std;



vector<int> findintersection(int array1[], int array2[], int m, int n)
{
    int indexi = 0;
    int size = max(m, n);
        int intersection[size];
        vector<int> result;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                bool already = false;
            if (array1[i] == array2[j])
            {
                for (int k = 0; k < indexi; k++)
                {

                    if (intersection[k] == array1[i])
                    {
                        already = true;
                        break;
                    }
                }
              
                
                if (!already)
                {
                    intersection[indexi++] = array1[i];
                }
                if (result.empty() || result.back() != array1[i] )
                {
                    result.push_back(array1[i]);
                }
            }
            }
            
          
        }
    
        for (int i = 0; i < indexi; i++)
        {
            cout << intersection[i] <<" ";
        }
        
return result;
    
}

int main()
{
    int array1[5] ={1,2,4,5,5};
    int array2[6] = {1,2,3,4,8,5};
    findintersection(array1,array2,5,6);
    vector <int>inter =   findintersection(array1,array2,5,6);
    for (int i = 0; i < inter.size(); i++)
    {
        cout << inter[i] << " ";
    }
    
}