#include <iostream>
using namespace std;
void output(int *,float*);
//function to output the values using references
void output(int *r,float *c){//address will be passed
    cout<<"Inside output function with reference \n";
    *r=(*r)+1;
    cout<<"Roll No:"<<*r<<endl;
    *c=(*c)+0.1;
    cout<<"CGPA:"<<*c<<endl;
}
int main(){
    int rollno;
    float cgpa;
    cout<<"Enter values:";
    cin>>rollno>>cgpa;
    output(&rollno,&cgpa);//address of variables will be passed
    cout<<"\n output function call is over:\n";
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"CGPA:"<<cgpa<<endl;
    return 0;
}
