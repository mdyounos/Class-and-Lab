#include<bits/stdc++.h>
using namespace std;

void countCharacter(string str);
int main()
{
    string str;
    cout<< "Enter a string: ";
    getline (cin, str);
    countCharacter(str);
    return 0;
}
void countCharacter(string str)
{
    int vowel=0,consonant=0;
    for(int i=0;i<(str.length());i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            consonant++;
        }
    }
    cout<<"Number of vowel: "<<vowel<<endl;
    cout<<"Number of consonant: "<<consonant<<endl;
}
