#include<iostream>
using namespace std;

void inchToCm(double *l);
int main()
{
    double length[5] = {10.2,13.3,20.2,8.5,9.3};
    for(int i=0; i<5; i++)
    {
        cout<<length[i] <<"inch"<<endl;
    }
    inchToCm(length);
    cout<<"after converting..."<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<length[i]<<"cm"<<endl;
    }
    return 0;
}
void inchToCm(double *l)
{
    for(int i=0; i<5; i++)
    {
        *l = *l * 2.54;
        l++;//*l++; OR l++; both indicate increment of length array
    }
}
