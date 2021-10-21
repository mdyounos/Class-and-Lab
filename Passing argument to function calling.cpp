#include<iostream>
using namespace std;

void repChar(char ch, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<ch;
    }
    cout<<endl;
}
int main()
{
    char ch;
    int n;
    cout<<"Enter a character: ";
    cin>>ch;

    cout<<"Enter a number of times to repeat it: ";
    cin>>n;
    repChar(ch,n);
    return 0;

}
