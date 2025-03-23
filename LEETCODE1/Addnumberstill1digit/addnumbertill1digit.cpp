#include <iostream>

using namespace std;

int main()
{
int num = 38;
int sum = 0;
while (num >= 10)
{
    int sum = 0;
    int temp = num;
    while (temp)
    {
        int digit = temp % 10;
    sum += digit;
    temp /= 10;
    }
    num = sum;
}
cout << num;



}