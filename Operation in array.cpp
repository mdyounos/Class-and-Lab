#include<bits/stdc++.h>
using namespace std;
int Set = 0;

void Search(int Size,int key,int arr[])
{
    for(int i = 0;i<Size; i++)
    {
        if(arr[i] == key)
        {
            cout<<key<<" is found in array"<<endl;
            Set = 1;
        }
    }
    if(Set == 0)
        cout<<key<<" is not found."<<endl;
}

int main()
{
    int Size =10;
    int arr[Size] = {12,15,8,1,2,3,4,5,6,7};
    int key=50;
    Search(Size,key,arr);
    return 0;
}
