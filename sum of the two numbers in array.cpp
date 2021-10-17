#include<iostream>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    int targetValue;
    cin>> targetValue;
    int flag=0;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]+arr[j]==targetValue)
            {
                cout<< "The requried indices is: "<< i <<' '<< j <<endl;
                flag = 1;
            }
        }
    }
    if(flag==0)
    {
        cout<< "Here does not found requried indices." << endl;
    }
    return 0;
}
