#include<iostream>
#include<vector>
using namespace std;

int main()
{
    double arr[] = {1.1,2.2,3.3,4.4};
    vector <double> v1(arr,arr+4);
    for(int i=0; i<v1.size();i++)
    {
        cout<<v1[i]<<' ';
    }

    cout<<endl;
    cout<<"Show the data elements from back...."<<endl;
    vector <double> v2(4);

    v1.swap(v2);
    while(!v2.empty())
    {
        cout<<v2.back()<<' ';
        v2.pop_back();
    }
    cout<<endl;
    return 0;
}
