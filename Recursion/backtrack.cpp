#include <iostream>

using namespace std;


void print(int end1 ,int end)
{
    if (end1 < 1)
    {
        return;
    }
    print(end1-1,end);
    cout << end1 << " ";
    
    //  this is back tracking technique in recursion
    //  now look 
    //  the function begins 3,3 end1 is not < 1 so doesnt happen print function recursively calls it with the parameters as print(2,3)
    //  the cout will not begin right now
    //  not recursion happens 2 <!= 1 so again recursion happens and this time print(1,3)
    //  now again 1 !< 1 so print (0,3); now if statement runs and return now we back track to each function
    //  and then start to print from 1 to the nth number get it!!

    // 
// In recursion while going, things happen while in backtracking, in coming back things happen, that's why the term backtracking

}


int main()
{

print(4,4);


}