#include<iostream>
using namespace std;

class Node{             //For every Node
public:
    int data;
    Node *next;
};

class Linkedlist{
    Node *head;         //Only first address of linked list access hole linked list
public:
    Linkedlist()
    {
        head = NULL;   //When created object at this time first node of Linked list set to Null
    }
    void addNode(int val);
};

int main()
{
    Linkedlist *List = new Linkedlist();
    return 0;
}
