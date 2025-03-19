#include <iostream>
using namespace std;


int gcd (int num1,int num2){
    if (num1 == 0)
    {
        return num2;
    }
    if (num2 == 0)
    {
        return num1;
    }
    
    
    num1 -= num2;
    int maxi = max(num1,num2);
    int mini = min(num1,num2);
   return gcd(maxi,mini);
}
int gcd2(int num1, int num2) {
    if (num2 == 0) return num1;
    return gcd2(num2, num1 % num2);
}
//  no need to find minis much here as 100% num1% num2 will be smaller then num2 or equal

int main()
{

    int num1 = 20;
    int num2 = 70;
    int maxi =  max(num1,num2);
    int mini =  min(num1,num2);
    num1 = maxi%mini;
    cout << gcd(mini,num1) << endl;

//  the above methos is more efficient as it becomes directly the one and just one step would be required after it



     num1 = 1000;
     num2 = 1000;
    cout << gcd(num1, num2) << endl;  // Outputs 10
    return 0;

    int number1 = 75;
    int number2 = 10;
    int maxer = max(number1,number2);
    int minis = min(number1,number2);
    cout <<gcd2(maxer, minis);
}