#include<iostream>
using namespace std;
class Distance{
private:
    int feet;
    float inches;
public:
    Distance ()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getdist()
    {
        cout<< "Enter feet: ";cin>>feet;
        cout<< "Enter inches: ";cin>>inches;
    }
    void showdist()
    {
        cout<< feet << "\'-" << inches << "\"" << endl;
    }
    void operator +=(Distance d2)
    {
        feet += d2.feet;
        inches += d2.inches;
        if(inches >= 12.0)
        {
            inches -= 12.0;
            feet++;
        }
    }
};
int main()
{
    Distance dist1;
    dist1.getdist();
    cout<< "\ndist1 = ";dist1.showdist();

    Distance dist2(11,6.25);
    cout<< "\ndist2 = "; dist2.showdist();

    dist1+=dist2;
    cout<< "\nAfter addition,";
    cout<< "\ndist1 = "; dist1.showdist();
    cout<< endl;
    return 0;
}
