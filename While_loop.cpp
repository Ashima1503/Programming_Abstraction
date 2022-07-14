#include <iostream>
using namespace std;
int main(){
    short val=32766, i=1;
    cout<<"Value before while starts is: "<<val<<endl;
    while(i<5){
        cout<<"Value is: "<<val<<endl;
        val++;
        i++;
    }
    return 0;
}
