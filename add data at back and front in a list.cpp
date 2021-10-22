#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> List;
    List.push_back(42);
    List.push_front(12);
    List.push_back(85);
    List.push_back(69);
    List.push_front(45);
    List.push_back(77);
    List.push_back(23);
    List.push_front(11);
    int size = List.size();
    for(int i=0; i<size; i++)
    {
        cout<<List.front()<<' ';
        List.pop_front();
    }
    return 0;
}
