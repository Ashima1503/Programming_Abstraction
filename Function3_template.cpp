#include <iostream>
using namespace std;
template <class T>
T add(T a ,T b,T c=0,T d=0 ,T e=0){
    T result;
    result=a+b+c+d+e;
    return result;
}
int main(){
    int i=1, j=2, k=3, l=4, m=5, s1;
    double f=0.1, g=0.2, h=0.3, p=0.4, q=0.5, s2;
    int u=1, v=2, s3;
    s1=add<int>(i,j,k,l,m);
    s2=add<double>(f,g,h,p,q);
    s3=add<int>(u,v);
    cout<<s1<<'\n';
    cout<<s2<<'\n';
    cout<<s3<<'\n';
}
/////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int add(int a,int b,int c=0, int d=0, int e=0){
//     return a+b+c+d+e;
// }

// int main(){
//     cout<<"Sum1:"<<add(1,2)<<endl;
//     cout<<"Sum2:"<<add(1,2,3)<<endl;
//     cout<<"Sum3:"<<add(1,2,3,4)<<endl;
//     cout<<"Sum4:"<<add(1,2,3,4,5)<<endl;

//     return 0;
// }
