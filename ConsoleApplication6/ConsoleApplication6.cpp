#include <iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    string length ;
    getline(cin, word);
        if(word.length()>10)
        {
           cout << word[0];
          
           cout << word.length()- 2;  
          cout << word[word.length()-1;  
        }
        else {
            cout << word;
        }
    return 0;
}