#include<iostream>
using namespace std;

void copyString(const char *src, char *dest);
int main()
{
    char *str1 = "This is first line string.";
    char str2[80];
    copyString(str1,str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}
void copyString(const char *src, char *dest)
{
    while(*src)
        *dest++ = *src++;
    *dest = '\0';
}
