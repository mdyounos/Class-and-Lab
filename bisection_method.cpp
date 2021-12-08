#include<bits/stdc++.h>
#define f(x) x*x+x-1
using namespace std;
int main()
{
    float a=0,b=1,fa,fb,c,fc;
    fa = f(a);
    fb = f(b);
    if(fa*fb<0.0)
    {
        do
        {
            c = (a+b)/2;
            fc = f(c);
            if(fa*fc<=0)
                b = c;
            else
                a = c;
        }
        while(fc!=0);
        cout<<"The required root is: "<<c<<endl;
    }
    else
    {
        cout<<"Incorrect Range"<<endl;
    }
    return 0;
}
