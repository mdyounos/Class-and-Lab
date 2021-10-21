#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};
void disp(Distance d);
int main()
{
    Distance d1,d2;
    cout<<"Enter feet: ";
    cin>>d1.feet;
    cout<<"Enter inch: ";
    cin>>d1.inches;

    cout<<"Enter feet: ";
    cin>>d2.feet;
    cout<<"Enter inch: ";
    cin>>d2.inches;

    cout<<"d1 = ";
    disp(d1);
    cout<<"d2 = ";
    disp(d2);
    return 0;
}
void disp(Distance d)
{
    cout<<d.feet<<"\'"<<d.inches<<"\""<<endl;
}
