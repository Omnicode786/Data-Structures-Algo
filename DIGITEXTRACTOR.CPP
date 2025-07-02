#include <iostream> 

using namespace std;


void backtrackorder(int n,int array[],int index){
    if (n == 0)
    {
        return;
    }
    backtrackorder(n/10,array,index);
    array[index] = n%10;
    index++;
    
    
}


int main()
{
    int array[5];
    int n = 7789;
    for (int i = 0; n != 0 ; i++)
    {
        array[i] = n%10;
        n = n/10;
    }
    cout <<array[0];
    cout <<array[1];
    cout <<array[2];
    cout <<array[3];
cout <<endl;

    backtrackorder(n,array,0);
 cout <<array[0];
    cout <<array[1];
    cout <<array[2];
    cout <<array[3];

cout <<endl;

}