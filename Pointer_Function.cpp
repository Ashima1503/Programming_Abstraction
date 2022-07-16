#include <iostream>
using namespace std;
int add(int f,int s,int p){
    return f+s+p;
}
int sub(int f,int s,int p){
    return f-s-p;
}
int mul(int f,int s,int p){
    return f*s*p;
}

int operation(int x,int y,int z,int(*function)(int,int,int)){
    int g;
    g=(*function)(x,y,z);
    return g;
}
int main()
{
    int a=9,b=6,c=10;
    cout<<"\nAdd:"<<operation(a,b,c,add);
    cout<<"\nSub:"<<operation(a,b,c,sub);
    cout<<"\nmul:"<<operation(a,b,c,mul);
    
    return 0;
}
