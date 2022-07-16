#include <iostream>
using namespace std;
enum colors{red=5, black=5};
enum suit{heart, diamond=8,spade=3, club};//after spade value of next variable is automatically +1 i.e 4 
typedef unsigned int uInteger;//this keyword is used to give a type a new name(alias)
uInteger b1,b2;
typedef long double ldbl;
ldbl d1=0.2, d2;
int main()
{
    cout<<"The value of enum color:"<<red<<","<<black<<endl;
    cout<<"The value of suit default value:"<<heart<<","<<diamond<<","<<spade<<","<<club<<endl;
    cout<<d1;
    return 0;
}
