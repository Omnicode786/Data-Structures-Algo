#include <iostream>

#include <math.h>
using namespace std;



int main(){


int decimal = 0;
string binary = "1010";

int length = binary.length();
for (int i = 0; i < length; i++)
{
    
    decimal += (binary[length - i - 1]-'0')*pow(2,i);
}


cout<<endl;
cout <<decimal;

}