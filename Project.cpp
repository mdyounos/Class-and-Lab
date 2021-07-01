//****************************************************************
//                      Header files
//****************************************************************
#include<bits/stdc++.h>
using namespace std;
//******************************************************************
//                      Global variables
//******************************************************************
const int SIZE=10;
int i = 0;
int k=0;
int flag = 0;
string temp;
string New;

void developed_by()
{
    cout << "\t\t[Name]: Md Younos\n" << endl;
    cout << "\t\t[ID]: 194028\n" << endl;
    cout << "\t\t[University]: Dhaka University of Engineering & Technology\n\n\n\n" << endl;

}
//**********************************************************************
//**********************************************************************
//                                    Contact Class
//**********************************************************************
//**********************************************************************
class contact
{
public:
    string Name;
    string Number1;
    string Number2;
    string Email;
    string Address;
public:
    create_contact()
    {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<< "Name: ";
        getline(cin, Name);
        cout<< "Number1: ";
        getline(cin, Number1);
        cout<< "Email: ";
        getline(cin, Email);
        cout<< "Address: ";
        getline(cin, Address);
    }

    show_contact()
    {
        k++;
        if(Number1!="\0")
        {
            cout<< "Contact No: " << k <<endl;
            cout<< "Name: " << Name << endl;
            cout<< "Number1: " << Number1 << endl;
            cout<< "Email: " << Email<< endl;
            cout<< "Address: " << Address << endl;
        }
    }
    ~contact()
	{
	    Name = "\0";
	    Number1 = "\0";
	    Email = "\0";
	    Address = "\0";
	    cout<< "delete the number successful.....\n" << endl;
	}
};

//*************************************************************************
//*************************************************************************
//                                  Main Function
//**************************************************************************
//**************************************************************************
int main()
{
    developed_by();
    contact ob[SIZE];
    contact *contact;
    for(;;)
    {
        int ch;
        cout<<"\t **** Welcome to Contact Management System ****";
        cout<<"\n\n\n\t\t\tMAIN MENU\n\t\t=====================";
        cout<<"\n\t\t[1] Add a new Contact\n\t\t";
        cout<<"[2] List all Contacts\n\t\t";
        cout<<"[3] Search for contact\n\t\t";
        cout<<"[4] Edit a Contact\n\t\t";
        cout<<"[5] Delete a Contact\n\t\t";
        cout<<"[0] Exit\n\t\t=================\n\t\t";
        cout<<"Enter the choice(0-5):";

        cin>>ch;
        switch(ch)
        {
        case 0:
            cout<< "Your Program is exited..." << endl;
            exit(0);
        case 1:
            ob[++i].create_contact();
            break;
        case 2:
            k = 0;
            for(int j=1; j<=i; j++)
            {
                ob[j].show_contact();
                cout<< "\n\n";
            }
            break;
        case 3:
            cout<< "Enter a number for searched: ";
            cin>> temp;
            cout<< "\n\n";
            for(int j=1; j<=i; j++)
            {
                if(ob[j].Number1==temp)
                {
                    flag = 1;
                    k = 0;
                    ob[j].show_contact();
                }
            }
            if(flag == 0)
                cout<< "No data found...." << endl;
                cout<< "\n\n";
            break;
        case 4:
            cout<< "Enter a number for edit: ";
            cin>> temp;
            cout<< "\n\n";
            for(int j=1; j<=i; j++)
            {
                if(ob[j].Number1==temp)
                {
                    flag = 1;
                    cout<< "what you want to change in name(n)/number(N)/email(e)/address(a)? \n" << endl;
                    char key;
                    cout<< "Give your choose key: ";
                    cin>> key;
                    cout<< "\n\n";
                    switch(key)
                    {
                    case 'n':
                        cout<< "a new name: ";
                        cin>> New;
                        ob[j].Name = New;
                        break;
                    case 'N':
                        cout<< "a new number: ";
                        cin>> New;
                        cout<< "\n\n";
                        ob[j].Number1 = New;
                        break;
                    case 'e':
                        cout<< "a new email: ";
                        cin>> New;
                        cout<< "\n\n";
                        ob[j].Email = New;
                        break;
                    case 'a':
                        cout<< "a new address: ";
                        cin>> New;
                        cout<< "\n\n";
                        ob[j].Address = New;
                        break;
                    default:
                        cout<< "please give a correct key..." << endl;
                        cout<< "\n\n";
                    }
                    cout<< "Show this number after edit: \n" << endl;
                    k = 0;
                    ob[j].show_contact();
                }
            }
            if(flag == 0)
                cout<< "No data found for edit...." << endl;
                cout<< "\n\n";
            break;
        case 5:
            cout<< "Enter a number for delete: ";
            cin>> temp;
            cout<< "\n\n";

            for(int j=1; j<=i; j++)
            {
                if(ob[j].Number1==temp)
                {
                    flag = 1;
                    contact = &ob[j];
                    delete contact;
                }
            }
            if(flag == 0)
                cout<< "No data found for delete......\n" << endl;
                cout<< "\n\n";
            break;

        }
    }
    return 0;
}
//**************************************************************************
//                                  The end
//**************************************************************************
