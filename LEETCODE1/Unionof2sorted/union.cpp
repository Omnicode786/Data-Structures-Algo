#include <bits/stdc++.h>

using namespace std;

void unioner(int array1[], int array[], int size, int size1)
{
    set<int> st;

    for (int i = 0; i < size; i++)
    {
        st.insert(array1[i]);
    }
    for (int i = 0; i < size1; i++)
    {
        st.insert(array[i]);
    }
    for (auto it : st)
    {
        cout << it << " ";
    }
}

vector<int> optimalUnion(int array[], int array1[], int size, int size2)
{
    vector<int> UnionArrayl;
    int i = 0;
    int j = 0;
    while (i < size && j < size2)
    {
        if (array[i] <= array1[j])
        {
            if (UnionArrayl.size() == 0 || UnionArrayl.back() != array[i])
            {
                UnionArrayl.push_back(array[i]);
            }
            i++;
        }
        else
        {

            if (UnionArrayl.size() == 0 || UnionArrayl.back() != array1[j])
            {
                UnionArrayl.push_back(array1[j]);
            }
            j++;
        }
    }

    while (i < size)
    {
        if (UnionArrayl.size() == 0 || UnionArrayl.back() != array[i])
        {
            UnionArrayl.push_back(array[i]);
        }
        i++;
    }
    while (j < size2)
    {
        if (UnionArrayl.size() == 0 || UnionArrayl.back() != array1[j])
        {
            UnionArrayl.push_back(array1[j]);
        }
        j++;
    }
    return UnionArrayl;

}

int main()
{


//  arrays have to be sorted

    int array1[10] = {1,3,4,5,6,7,7,8,9,99};
    int array2[11] = {1,3,4,5,5,6,7,7,7,8,9};
    int size = sizeof(array1) / sizeof(array1[0]);
    int size1 = sizeof(array2) / sizeof(array2[0]);
    vector <int> result = optimalUnion(array1, array2, size, size1);
    for (auto it:result){
        cout << it<<" ";
    }
}