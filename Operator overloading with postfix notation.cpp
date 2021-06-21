#include<iostream>
using namespace std;

class counter{
    int count;
public:
    counter operator ++()
    {
        return counter(++count);
    }
    counter operator ++(int)
    {
        return counter(count++);
    }
    counter():count(0)
    {

    }
    counter(int c)
    {
        count = c;
    }
    int get_count()
    {
        return count;
    }
};
int main()
{
    counter c1,c2;
    cout<<"\nc1= "<<c1.get_count();
    cout<<"\nc2= "<<c2.get_count();
    ++c1;
    c2=++c1;
    cout<<"\nc1= " << c1.get_count();
    cout<<"\nc2= " << c2.get_count();
    c2=c1++;
    cout<<"\nc1= " << c1.get_count();
    cout<<"\nc2= " << c2.get_count()<<endl;
    return 0;
}
