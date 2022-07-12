#include <iostream>
using namespace std;
int g=40;//global variable declaration
int main()
{
    int x;
    int a,b;//local variable dec;aration:
    a=10;
    b=20;
    int g=a+b;
    cout<<g<<endl;
    cout<<::g<<endl;
    g=2+(x=5);
    cout<<g;
    return 0;
}
