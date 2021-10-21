#include<iostream>
using namespace std;

void inchToCentimeter(double *l);
int main()
{
    double length =10.0;
    cout<<"Length is: "<<length<<"inch"<<endl;
    inchToCentimeter(&length);
    cout<<"Length is: "<<length<<"cm"<<endl;
    return 0;
}
void inchToCentimeter(double *l)
{
    *l *=2.54;
}
