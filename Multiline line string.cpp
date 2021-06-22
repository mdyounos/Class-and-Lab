#include<iostream>
using namespace std;
int main()
{
    const int MAX = 800;
    char str[MAX];
    cout<< "Enter a string: ";
    cin.get(str,MAX, '$');          //(variable_name,array_size,'symbol for end')
    cout<< "You entered: "<< str << endl;
}
