#include <iostream>
using namespace std;

int myAtoi(string s) {
    int n = s.length();
int integer = 0;
int sign = 1;

int i = 0;
while (s[i] == ' '){
i++;
}
if (s[i] == '-'){
sign = -1;
i++;
}
else if(s[i] == '+'){
sign = 1;
i++;
}


  while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';
        if (sign == 1 && (integer > INT_MAX / 10 || (integer == INT_MAX / 10 && digit > INT_MAX % 10))) {
            return INT_MAX;
        }

        // Overflow check for negative numbers
        if (sign == -1  && (integer > INT_MAX / 10 || (integer == INT_MAX / 10 && digit > INT_MAX % 10))) {
           cout <<"iadod";
            return INT_MIN;
        }

        integer = integer * 10 + digit;
i++;
}
//  remember to make algorithm fo rthe overflow


return (sign*integer);
}

int main(){

string no = "-91283472332";
int n = myAtoi(no);
cout <<n;



}