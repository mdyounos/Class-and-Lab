#include<iostream>
using namespace std;
void increment(int &a)
{
    a++;
    cout<<"value of q in increment block: "<<a<<endl;
    cout<<&a<<endl;
}
int main()
{
    int q = 3;
    increment(q);
    cout<<"value of q after increment: "<<q<<endl;
    cout<<&q<<endl;
    return 0;
}
