#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout.setf(ios::left);
    cout<< "This text is left justified";
    cout.unsetf(ios::left);
    cout.setf(ios::right);
    cout<<setw(50) << "This text is  right justified" << endl;

    //manipulators
    double val = 500;
    cout<< val << endl;
    cout <<setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << val << endl;
    int x = 500;
    cout<< dec << x << endl;
    cout<< oct << x << endl;
    cout<< hex << x << endl;
}
