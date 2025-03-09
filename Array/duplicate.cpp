#include <iostream>


using namespace std;


void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}


void dupicate22(int array[], int size){
    int duplicate[size] ;
    int duplicateIndex = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            //  j = i+1 because dumbo every element is a duplicate of itself offcourse
            if (array[i] == array[j])
            {

                bool already = false;
                for (int k = 0; k < duplicateIndex; k++)
               {

                    if (duplicate[k] == array[i])
                    {
                        already = true;
                        break;
                    }
                    
               }
               if (!already)
               {
                    duplicate[duplicateIndex++] = array[i];
               }
               
                
            }
            
        }
        
    }

    if (duplicateIndex > 0)
    {
        printarray(duplicate,duplicateIndex);

    }
    
}


int main(){

    int array[] = {5, 3, 8,1001, 3, 1, 9, 2, 5, 7, 6, 8, 4, 9, 10, 2, 6, 1, 5, 4, 7,
        3, 8, 6, 2, 10, 7, 1, 4, 5, 9, 3, 8, 2, 6, 7, 10, 1, 5, 4, 9,
        3, 8, 6, 2, 10, 7, 1, 4, 5, 9,101,1001,101,1001};


int size = sizeof(array) / sizeof(int);

dupicate22(array,size);



}