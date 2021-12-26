#include<bits/stdc++.h>
using namespace std;
//Global Variables
int n,index;

//integer descending
void Sorting()
{
    cout<<"Enter array size for integer descending order: ";
    cin>>n;
    int arr[n], index;

    //Integer value input from keyboard
    cout<<"Enter "<<n<<" integer values: ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    //This code for arrange descending order
    for(int i = 0;i<(n-1);i++)
    {
        int temp = arr[i];
        int highest = arr[i];
        int flag = 0;
        for(int j = i+1; j<n;j++)
        {
            if(highest<arr[j])
            {
                highest = arr[j];
                index = j;
                flag = 1;
            }
        }
        if(flag==1)
        {
            arr[i] = highest;
            arr[index] = temp;
        }
    }

    //Show the integers values
    cout<<"Descending order of integer values is: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//character descending
void Sorting(int n)
{
    char arr[n];

    //Integer value input from keyboard
    cout<<"Enter "<<n<<" character: ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    //This code for arrange descending order
    for(int i = 0;i<(n-1);i++)
    {
        char temp = arr[i];
        char highest = arr[i];
        int flag = 0;
        for(int j = i+1; j<n;j++)
        {
            if(highest<arr[j])
            {
                highest = arr[j];
                index = j;
                flag = 1;
            }
        }
        if(flag==1)
        {
            arr[i] = highest;
            arr[index] = temp;
        }
    }

    //Show the integers values
    cout<<"Descending order of characters is: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//string descending
void Sorting(int *n)
{
    char names[*n][20];

    //input the strings
    for(int i=0;i<*n;i++)
    {
        cin>>names[i];
    }
    //here arrange by descending ordering
    cout<<"\nAfter arrange by descending ordering: "<<endl;
    for(int i = 'z';i>='a';i--)
    {
        for(int j = 'z';j>='a';j--)
        {
            for(int k = 'z'; k>='a';k--)
            {
                for(int l = 0; l<*n; l++)
                {
                    if(i==names[l][0])
                    {
                        if(j==names[l][1])
                        {
                            if(k==names[l][2])
                                cout<<names[l]<<endl;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    Sorting();
    cout<<"Enter number of character: ";
    cin>>n;
    Sorting(n);
    cout<<"Enter number of string: ";
    cin>>n;
    Sorting(&n);
    return 0;
}
