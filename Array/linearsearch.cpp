#include <iostream> 
using namespace std;



// #linear search aik hi directrion me search simply


bool search(int array[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            return true;
        }
        
    }
    return false;
    


}


int main(){
int array[] = {1,55,33,2,43,3,34,5,2,10,4,55};

int size = sizeof(array) / sizeof(int);

bool found = search(array,size,1);
if (found)
{
cout <<"found"<<endl;
}
else{
cout <<" not found"<<endl;

}


}