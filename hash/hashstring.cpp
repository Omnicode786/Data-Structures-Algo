#include <iostream> 
#include <cctype>


using namespace std;


//  if it isnt exclusive to just lower case chars
void hashtring(string text){
    int hasher[256] = {0};
    for (int i = 0; i < text.size(); i++)
    {
        hasher[text[i]]++;
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << ": " << hasher[ch] << endl;
    }
cout << hasher[' '] << endl;
cout << hasher['?'] << endl;
cout << hasher['/'] << endl;

}


int main()
{

string name = "Helllo how are you my name is muzammil alam";
int hash[27] = {0};
for (int i = 0; i < name.length(); i++)
{
    if (isalpha(name[i]))
    {
        hash[tolower(name[i]) - 'a']++;
    }
    
}
for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << ": " << hash[ch - 'a'] << endl;
    }
    cout <<endl;
    cout <<endl;
    cout <<endl;
    cout <<endl;
hashtring("Hello How   d  f  f  f f   f are you?/What is your name?");
    return 0;

}