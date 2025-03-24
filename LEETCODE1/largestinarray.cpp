//  first lets do brute force


#include <iostream>

using namespace std;

    void BubbleSort(int arr[], int size){
        for (int i = 0; i < size; i++)
        {
        bool swapp = false;

            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    swapp = true;
                }
                
            }
            if (!swapp){
                return;
            }
            
        }
// time complexity is  nllogN
        
    }   

    int largestEfficient(int arr[], int size){
        int largest = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
            
        }
        return largest;
    }

int main()
{
    int array[5] = {2,3,10,3,1};
    BubbleSort(array,5);
    for (int i = 0; i < 5; i++)
    {
        cout <<array[i] <<" ";
    }
    cout <<"Largest and second largest inthe array are: "<<array[5-1]<<" "<<array[5-2]<<endl;
int array2[5] = {22,3,634,32,56};
cout <<"Letrgest: "<<largestEfficient(array2,5);

}