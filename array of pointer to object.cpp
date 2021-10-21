#include<iostream>
using namespace std;

class person{
    string name;
public:
    void setName()
    {
        cout<<"Enter name: ";
        getline(cin,name);
    }
    void showName()
    {
        cout<<name<<endl;
    }
};
int main()
{
    person *perPtr[120];
    int n = 0;
    char choice;
    do{
        perPtr[n] = new person;
        perPtr[n]->setName();
        n++;
        cout<<"Enter another(y/n)?";
        cin>>choice;
        cin.ignore();
    }while(choice=='y');
    cout<<endl<<"Show names....."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Person number "<<i+1<<':';
        perPtr[i]->showName();
    }

    return 0;
}
