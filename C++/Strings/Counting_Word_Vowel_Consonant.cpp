#include<iostream>
using namespace std;

int main()
{
    int word=0, vowel=0, consonant=0;
    string s = "How are you?";

    
    for(int i=0; s.size(); i++)
    {
        char temp = tolower(s[i]);
        if(temp=='a'|| temp=='e' || temp=='i'|| temp=='o'|| temp=='u')
        {
            vowel++;
        }
    }
    cout<<"Number of vowel: "<<vowel<<endl;
}
