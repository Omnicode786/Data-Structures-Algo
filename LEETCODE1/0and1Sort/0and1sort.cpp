//  sorting 0 and 1 


#include <iostream>
#include <vector>

using namespace std;

void sorter(int array[], int n){
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        //  array = 1,0,1,0,0,1;
        // if (array[start] == 0 && array[end] == 1)
        // {
        //     start ++;
        //     end--;
        // }

        //  we dont need the above condition
         if(array[start] == 0){
            start++;
        }
        else if(array[end] == 1){
            end--;
        }
        else if(array[start] == 1 && array[end] == 0)
        {
            swap(array[start],array[end]);
            start++;
            end--;
        }
    }
}

int main(){

int array[6]= {1,0,1,0,0,1};
sorter(array,6);
for (int i = 0; i < 6; i++)
{
    cout << array[i]<<" ";
}
cout <<endl;


}