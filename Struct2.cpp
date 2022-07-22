#include <iostream>//struct using array datatype
using namespace std;
struct student{
    int roll;
    float cgpa;
    char gen;
};

int main(){
    int n=0;
    cout<<"users:";
    cin>>n;
    student g22[25];
    for(int i=0;i<n;i++){
        cin>>g22[i].roll>>g22[i].cgpa>>g22[i].gen;
    }
    for(int i=0;i<n;i++){
        cout<<g22[i].roll<<"\n"<<g22[i].cgpa<<"\n"<<g22[i].gen<<endl;
    }
   
    return 0;
}
