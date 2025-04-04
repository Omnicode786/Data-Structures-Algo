#include<iostream>

using namespace std;


int Majority(int array[], int size){
    int elem;
    for (int i = 0; i < size; i++)
    {
        elem = array[i];
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count > size/2)
        {
            return elem;
        }
        
        
    }
 return elem;   
}

int main(){

int a[5] = {5 ,5,5,2,3};
int n = Majority(a,5);
cout <<n;




}