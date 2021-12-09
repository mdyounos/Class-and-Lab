#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,3,5,8,6};
    int i,n = 5;
    cout<<"Original values: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
    }
    int k = 3;
    i = k;
    while(i<n)
    {
        arr[i-1] = arr[i];
        i++;
    }
    n--;
    cout<<"After delete:"<<endl;
    for(i = 0;i<n;i++)
    {
        cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
    }
    return 0;
}
