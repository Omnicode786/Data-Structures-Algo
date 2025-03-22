#include <bits/stdc++.h>

using namespace std;

using namespace std;
using namespace chrono;
int main()
{

    map<int,int> hashmap;
//  if we use unordereed map it is faster as it doesnot have to take time to sort the numbers

unordered_map <int,int> hashmapper;

auto start1 = high_resolution_clock::now();

    int array[12] = {1,2,4,5,2,23,4,4,4,2,1,1};
    for (int i = 0; i < 12; i++)
    {
        hashmap[array[i]]++;

    }
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);


    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < 12; i++)
    {
        hashmapper[array[i]]++;

    }
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);

    
    for(auto it: hashmap){
        cout << it.first << ": " << it.second <<endl;
    }   cout << "Time taken: " << duration1.count()*1e-9 << " seconds" << endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;

    for(auto it: hashmapper){
        cout << it.first << ": " << it.second <<endl;
    }
    cout << "Time taken: " << duration2.count()*1e-9 << " seconds" << endl;
}