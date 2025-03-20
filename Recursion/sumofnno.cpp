#include <iostream> 

using namespace std;


void parametersumation(int num1, int sum){
    if (num1 < 1)
    {
        cout<<sum;
        return;
    }
    sum = sum + num1;
    parametersumation(num1-1,sum);


}
int recursivesumation(int n){
    if (n == 0)
    {
        return 0;
    }
    return n + recursivesumation(n-1);
    


}

int main()
{
    parametersumation(5,0);
    cout<<endl;
    cout << recursivesumation(5);

}