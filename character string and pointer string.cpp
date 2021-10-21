#include<iostream>
using namespace std;
int main()
{
    char str1[] = "It's first line string.";
    char *str2 = "It's second line string.";

    cout<<str1<<endl;
    cout<<str2<<endl;
//    str1++;
    str2++;
    cout<<str2<<endl;
}
