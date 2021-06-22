#include<iostream>
using namespace std;

class Distance{
int feet;
float inches;
public:
    void getdist()
    {
        cout<<"\nEnter feet: ";cin>>feet;
        cout<<"\nEnter inches: ";cin>>inches;
    }
    void showdist() const
    {
        cout<<feet<<"\'-"<<inches<<'\"';
    }
};

int main()
{
    Distance dist[100];
    int n=0;
    char ans;
    do{
        cout<<"Enter distance number "<<n+1;
        dist[n++].getdist();
        cout<<"Enter another(y/n)?:";
        cin>>ans;
    }while(ans!='n');
    for(int j = 0; j<n; j++)
    {
        cout<<"\nDistance number "<<j+1<<" is ";
        dist[j].showdist();
    }
    cout<<endl;
    return 0;
}
