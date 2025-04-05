#include <iostream>
using namespace std;
void sorter(int array[],int n){

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0) count1++;
        else if (array[i] == 1) count2++;
        else if (array[i] == 2) count3++;
    }
    cout<<count1 <<" "<<count2<<" "<<count3<<endl;
    for (int i = 0; i < n; i++)
    {
        if (i < count1) {
            array[i] = 0;
        } else if (i < count1 + count2) { // Corrected range for 1
            array[i] = 1;
        } else { // Remaining elements will be 2
            array[i] = 2;
        }

    }
    

}

int main(){


    int arrayp[10] = {2,2,1,1,0,0,2,0,0,1};
    sorter(arrayp,10);
    for (auto it:arrayp){
        cout <<it<<" ";
    }
}