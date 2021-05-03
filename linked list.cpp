#include<bits/stdc++.h>
using namespace std;
char choice;
int del;
//declare vehicle class
class vehicle{
public:
    vehicle* prev;
	int ID;
    string Type;
    string Model;
    int Price;
	vehicle* next;
};
vehicle* head = NULL;
//For adding
void push(vehicle** head_ref)
{
	vehicle* new_vehicle = new vehicle();
	int new_id;
	string new_type;
	string new_model;
	int new_price;

	cout<<"New ID: ";
	cin>>new_id;
	cout<<"New Type: ";
	cin>>new_type;
	cout<<"New Model: ";
	cin>>new_model;
	cout<<"New Price: ";
	cin>>new_price;

	new_vehicle->ID = new_id;
	new_vehicle->Type = new_type;
    new_vehicle->Model = new_model;
	new_vehicle->Price = new_price;


	new_vehicle->next = (*head_ref);

	(*head_ref) = new_vehicle;
}
//For delete
void deleteVehicle(vehicle** head_ref, vehicle* del)
{
    if (*head_ref == NULL || del == NULL)
        return;

    if (*head_ref == del)
        *head_ref = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);
    return;
}
//For adding at end
void append(vehicle** head_ref)
{
	vehicle* new_vehicle = new vehicle();

	vehicle *last = *head_ref;

	int new_id;
	string new_type;
	string new_model;
	int new_price;

	cout<<"New ID: ";
	cin>>new_id;
	cout<<"New Type: ";
	cin>>new_type;
	cout<<"New Model: ";
	cin>>new_model;
	cout<<"New Price: ";
	cin>>new_price;

	new_vehicle->ID = new_id;
	new_vehicle->Type = new_type;
    new_vehicle->Model = new_model;
	new_vehicle->Price = new_price;

	new_vehicle->next = NULL;

	if (*head_ref == NULL)
	{
		*head_ref = new_vehicle;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_vehicle;
	return;
}
//show all vehicle
void printList(vehicle *node)
{
	while (node != NULL)
	{
		cout<<"ID: "<<node->ID<<endl;
		cout<<"Type: "<<node->Type<<endl;
		cout<<"Model: "<<node->Model<<endl;
		cout<<"Price: "<<node->Price<<endl<<endl;
		node = node->next;
	}
}
//show number of vehicle
void numberVehicle(vehicle *node)
{
    int cnt=0;
	while (node != NULL)
	{
		cnt++;
		node = node->next;
	}
	cout<<"The vehicle number is: "<<cnt<<endl;
}
//For Text show and selection
display()
{
    vehicle *node;
    cout<<"...........Option Menu.........."<<endl;
    cout<<"[A]: Add a vehicle at beginning"<<endl;
    cout<<"[B]: Add a vehicle at end"<<endl;
    cout<<"[D] Delete a vehicle with ID"<<endl;
    cout<<"[S]: Show all vehicles from end"<<endl;
    cout<<"[N]: Number of vehicles"<<endl;
    cout<<"[Q]: Quit"<<endl;
    cout<<"................................"<<endl<<endl;

    cin>>choice;
    switch(choice)
    {
    case 'a':
    case 'A':
        push(&head);
        break;
    case 'b':
    case 'B':
        append(&head);
        break;
    case 'd':
    case 'D':
        cout<<"enter id for delete: ";
        cin>>del;
        while(node !=NULL)
        {
            if(del==node->ID)
            {
                head=node;
                break;
            }
            else
                node = node->next;
        }
        deleteVehicle(&head, head);
        break;
    case 's':
    case 'S':
        printList(head);
        break;
    case 'n':
    case 'N':
        numberVehicle(head);
        break;
    case 'q':
    case 'Q':
        return 0;
    default:
        cout<<"please press correct key!"<<endl;
    }
    display();
}

//This is main function
int main()
{
    display();
	return 0;
}



