#include <iostream>


using namespace std;

void strivermethod(int n)
{
        //  striver method
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n-i+1; j++)  // when i is 1 j is 0 so j wil run till 5-1+1 meaning 5 times now i is 2 and j will run tille 5-2+1 so 4 and then plus plus does the trick
            {
    cout <<"* ";
    
            }
    cout <<endl;        
        }
}

void mymethod(int n){
    for (int i = 0; i < n; i++)
    {
        // for (int j = n; j > 0; j--)    //  i = 0 j = 5 so * * * * * now next iteration 
        
        //  the goal is to connect colunms with rows somehow
        for ( int j = n-i; j > 0; j--)

        {
            cout <<"* ";
        }
        cout << endl;
        
    }

}
void gptmethod(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)  // when i is 1 j is 0 so j wil run till 5-1+1 meaning 5 times now i is 2 and j will run tille 5-2+1 so 4 and then plus plus does the trick
        {
cout <<"* ";

        }
cout <<endl;        
    }
}

int main()
{
    int n = 5;

  strivermethod(n);
  mymethod(n);
gptmethod(n);
    


}