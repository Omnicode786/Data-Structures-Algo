#include <iostream>
#include<cmath>


using namespace std;



int main()
{
int number = 5678;

int count = 0;
for (int i = 0; number != 0; i++)
{
    number = number / 10;
    count++;
}
cout <<count<<endl; 

//   another new way to count is 

int number2 = 56754558;
int count2 = log10(number2) + 1;
// this gives something value in points then we add 1 then it gives us points somehting and then the int conversion will be the amout of digits
cout <<count2;





}