#include <iostream>


using namespace std;

int main(){
    int n;
    cin >>n;
    
    for (int row = 1; row <= n; row++)
    {
        int count = row;
        for (int col = 1; col <= row; col++)
        {
            cout << count;
            count += 1;

            //  above and below code both correct

            // cout<<row + col - 1;
        }
        cout << endl;
        
    }
    


}