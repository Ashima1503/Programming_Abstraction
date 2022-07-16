#include <iostream>
using namespace std;

int main()
{
    int x=5,z=10;
    int *ptr =&x;
    // const int *ptr2=&x;
    // int *const ptr3=&x;
    // const int *const ptr=&x;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<<endl;
    cout<<"Address of ptr: "<<&ptr<<endl;
    *ptr=18;
    cout<<"Updated Value of x: "<<x<<endl;

    cout<<"**********Changing refernce of PTR********** "<<x<<endl;
    ptr=&z;
    cout<<"Value of z: "<<z<<endl;
    cout<<"Address of z: "<<&z<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<<endl;
    cout<<"Address of ptr: "<<&ptr<<endl;
    return 0;
}
