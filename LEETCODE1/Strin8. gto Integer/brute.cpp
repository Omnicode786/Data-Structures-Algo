#include<iostream>


using namespace std;


int Atoi(string number){
int n = number.length();
int integer = 0;
int sign = 1;
if (number[0] == '-') sign = -1;
int i = 0;
while (number[i] == ' ')
{
    i++;
}


if (i < n && number[i] == '-') {
    sign = -1;
    i++;
} else if (i < n && number[i] == '+') {
    i++;
}

while(i < n)
{
    if (!isdigit(number[i]))
    {
        break;
    }
    if (integer < INT_MAX/10 && integer > INT_MIN / 10 && number[i] != ' ') integer = integer*10 + (number[i] - '0');
    i++;
}
return (sign*integer);


}
int main(){


    string num = "   -042";
    int n = Atoi(num);
    cout <<n<<endl;
}