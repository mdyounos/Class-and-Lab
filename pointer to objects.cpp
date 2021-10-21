#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inch;
public:
    getDistance()
    {
        cout<<"Enter feet: ";cin>>feet;
        cout<<"Enter inch: ";cin>>inch;
    }
    displayDistance()
    {
        cout<<feet<<"\'-"<<inch<<"\""<<endl;
    }
};
int main()
{
    Distance dist;          //Formal way
    dist.getDistance();
    dist.displayDistance();

    Distance *disptr;       //pointer type object via
    disptr = new Distance;
    disptr->getDistance();
    disptr->displayDistance();
    return 0;
}
