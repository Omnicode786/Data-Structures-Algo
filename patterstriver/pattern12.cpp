//  pyramid pattern


#include <iostream> 

using namespace std;


int main()
{
   for (int i = 0; i < 5; i++)
   {
       for (int k = 0; k < 5-i-1; k++)
       {
          cout <<" ";
       }
       

       char ch = 'A';
       int numforit = (i*2) +1;
       for (int j = 0; j < numforit; j++)
       {
        cout <<ch;
        if (j >= (numforit/2)) ch--;
        else ch++;
       }
       

       for (int k = 0; k < 5-i-1; k++)
       {
          cout <<" ";
       }
       cout <<endl;
       
   }
   


}