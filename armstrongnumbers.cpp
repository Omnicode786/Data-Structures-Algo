//  if each digit cubes sums up to thenumber itself then that number is an armstrong number

#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    int number = 1634;
    int check = number;
    int armstrong = 0;
    while (number != 0){
        int digit = number%10;
        armstrong += pow(digit,3);
        number /= 10;
    }
    if (armstrong == check)
    {
        cout <<"It is an armstrong number"<<endl;
    }
    else cout <<"It is not "<<endl;
    


}
