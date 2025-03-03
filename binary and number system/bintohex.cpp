#include <iostream>
#include <math.h>


using namespace std;


int main(){

string binary = "1111111001010101";

int decimal = 0;

int length = binary.length();

for (int i = 0; i < length; i++)
{
    decimal += (binary[length - i - 1] - '0')*pow(2,i);
}

cout <<decimal<<endl;

string hex = "";

for (int i = 0; decimal > 0; i++)
{
    int remainder = decimal % 16;
    //  remember that float cant be used by remainder %
    if (remainder >= 10)
    {
        hex += (remainder - 10 + 'A');
    }
    else{
        hex += char(remainder + '0');
    }
    decimal /= 16;

}


cout <<hex <<endl;


}