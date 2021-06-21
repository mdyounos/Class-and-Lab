#include<iostream>
using namespace std;

class counter{
int count;
public:
    counter():count(0)
    {

    }
    int get_count()
    {
        return count;
    }
    counter operator++()
    {
        ++count;
        counter temp;
        temp.count=count;   //convert int to counter
        return temp;        //here required counter type variable return
    }
};
int main()
{
    counter c1,c2;
    cout<<"\nc1= "<<c1.get_count() ;
    cout<<"\nc2= "<<c2.get_count() ;
    ++c1;
    c2=++c1;
    cout<<"\nc1= "<<c1.get_count() ;
    cout<<"\nc2= "<<c2.get_count() ;
    return 0;
}
