#include <iostream>

using namespace std;

int main()
{
int num = 38;
while (num >= 10)
{
    int sum = 0;
    
    

 int digit = num % 10;
    sum += digit;
    
    num = sum;
}
cout << num;



}