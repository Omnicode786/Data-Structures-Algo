#include <iostream>


using namespace std;

void print(int count){
    if (count == 101)
    {
        return;
    }
    
    cout << count<<endl;
    count++;
    print(count);
}

int main()
{
print(6);


}