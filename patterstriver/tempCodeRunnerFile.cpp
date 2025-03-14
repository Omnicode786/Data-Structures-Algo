//  pyramid pattern


 #include <iostream> 

 using namespace std;


 int main()
 {
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5-i-1; k++)
        {
//  imagine 
// k is 0 now it prints g g g g since i is 4
// now  k is 1 now it prints which is less than 5-1-1 = 3 so g g g 
// now k is 2 which is not  less than 5-2-1 = 2 but now we are in function loop pthread_barrier_destroys
// so now it outputs gg


           cout <<"g";
        }
        

        for (int j = 0; j < (i*2) +1; j++)
        {
            cout <<"*";
        }
        for (int k = 0; k < 5-i-1; k++)
        {
           cout <<"f";
        }
        cout <<endl;
        
    }
    


 }