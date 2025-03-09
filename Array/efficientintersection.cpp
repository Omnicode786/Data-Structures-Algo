#include <iostream>
#include <vector>

using namespace std;

vector<int> intersection(int array1[], int array2[], int m, int n)
{
    vector<int> result; // Result ka vector jisme common elements dalne hain

    for (int i = 0; i < m; i++) // Pehla array iterate kar raha hoon
    {
        int element = array1[i];    // Current element ko uthaya
        for (int j = 0; j < n; j++) // Ab doosre array se match karwana hai
        {
            if (element == array2[j]) // Mil gaya bhai common element
            {
                if (result.empty()||result.back() != element) // isse agr piche array 1 me bhi agar hena same element tab bhi rduplicae create ni hoga
                {
                    result.push_back(element); // Result me daal diya
                }
                
                array2[j] = INT_MIN;  
                break;
                     // Ye mark kar diya taake dobara count na ho
                                 // Ek baar mil gaya toh aage check karne ki zaroorat nahi
//  dekho sidhi siha isme kiya horha he
//  jab hane aik element find krlia ke ye common he to ab check kese kren ke ye take repeat na hina
//  like wo phir se result me na jaye to uske liye hamne jo element agya usi ko hmne int min se replace krdia ab j ki us position me wo he int min
//  to jab loop wapas chalega then we wil se that that particular element will be ignored as it is esentially changed


// //  why have we used breAks??
// 1 == array2[0] → Match! → result me daal diya
// Par loop ke andar hai, aage ka bhi check karega
// 2 == 1?  Arre bhai, match mil gaya na, kya dekh raha hai?
// 9 == 1?  Yaar, time waste mat kar
// Baaki sab bhi check hoga unnecessarily

//  isse aik or problem he ke duplicate ajayega result me jes misal ke tor pr agar the array2 is {1,2,3,3,4,5} and the current element is 3 to phir
//  dekho jab ham check krenge aik bar match hogya ke common he ab agr break ni hoga to wo phir se match krlega 3 ko or 2 bar push hojayega result me 3 smjhe kch!!



            }
        }
    }
    return result; // Final vector return kiya jisme common values hain
}

int main()
{

    int array1[7] = {1, 2, 3, 4, 5, 6,6};   // Pehla array
    int array2[8] = {1, 2, 9,6,6, 10, 22, 5}; // Doosra array

    // Intersection function ko call kiya, common elements store kiye
    vector<int> inter = intersection(array1, array2, 7, 8);

    // Result print kar rahe hain
    for (int i = 0; i < inter.size(); i++)
    {
        cout << inter[i] << " "; // Ek ek karke print kar diya common elements
    }
}
