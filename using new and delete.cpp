#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char *str1 = "This is first string.";
    int len = strlen(str1);

    char *str2;
    str2 = new char[len+1];
    strcpy(str2,str1);
    cout<<"str2 = "<<str2<<endl;
    return 0;
}
