#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={100,15,24,53};
    vector <int> v(arr,arr+4);
    cout<<"before inserting: ";
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
    v.insert(v.begin()+2,240);
    cout<<"after insertion: ";
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
    v.erase(v.begin()+4);
    cout<<"after delete: ";
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
    return 0;
}
