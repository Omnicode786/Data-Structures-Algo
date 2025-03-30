    #include <iostream>


    using namespace std;


    int maxsubarray(int array[],int size,int k){
        int sum;
        int length = -1;
        for (int i = 0; i < size; i++)
        {
            // sum = array[i];
    // if we do the above then if the only element is one that is equal to the k then it fails
    sum = 0;

            for (int j = i; j < size && sum <= k; j++)
            {
                sum+=array[j];
                if (sum == k)
                {
                    if ((j-i+1) > length)
                    {
                    length = j-i+1;
                    break;

                    }
                    
                }
                
            }
            
        }
        
    return length;

    }


    int main(){
    int a[5] = {22,33,44,5,4};
    int n = maxsubarray(a,5,4);
    cout <<n;
        


    }