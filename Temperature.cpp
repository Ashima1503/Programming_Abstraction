#include <iostream>

using namespace std;

int main()
{
    float f;
    cout<<"Enter temp in f: ";
    cin>>f;

    float c=((f-32)*5)/9;
    cout<<"temp in celsius: "<<c<<endl;

    return 0;
}
