//  pyramid pattern


#include <iostream> 

using namespace std;


int main()
{
   for (int i = 0; i < 5; i++)
   {
       for (int k = 0; k < i; k++)
       {
//  imagine 
// k is 0 now it prints g g g g since cond is 4
// now  k is 1 now it prints which is less than 5-1-1 = 3 so g g g 
// now k is 2 which is not  less than 5-2-1 = 2 but now we are in function loop body
// so it outputs  g g now k becomes 3 5-3-1 = 1 so loop will not run hey chat gpt tell me why the g is coming one more time
//  nooby k is reseted to 0 every time nigga


          cout <<" ";
       }
       
//  my method
    //    for (int j = (4*2) - i*2; j >= 0 ; j--)
    //    {
    //        cout <<"*";
    //    }

    //  striver
    for (int j = 0; j < 2*5 - ((i*2)+1); j++)
    {
        cout <<"*";
    }
    
       
       cout <<endl;
       
   }
   


}