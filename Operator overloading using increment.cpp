#include<iostream>
using namespace std;

class counter{
int count;
public:
    counter():count(0)          //pass the value to count variable
    {}
    int get_count()
    {
        return count;
    }
    void operator ++()      //for increment action
    {
        ++count;
    }
};
int main()
{
    counter c1,c2;
    cout<<"\nc1= "<< c1.get_count();
    cout<<"\nc2= "<< c2.get_count();
    ++c1;
    ++c2;
    ++c2;
    cout<<"\nc1= "<< c1.get_count();
    cout<<"\nc2= "<< c2.get_count();
    return 0;
}
