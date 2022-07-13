////Printing Sum by using different function for different datatype.
// #include <iostream>
// using namespace std;
// int sum1(int a,int b){
//     return a+b;
// }
// float sum2(float c,float d){
//     return c+d;
// }
// double sum3(double e,double f){
//     return e+f;
// }
// int main(){
//     cout<<"Sum1:"<<sum1(2,8)<<endl;
//     cout<<"Sum2:"<<sum2(2.4,8.76)<<endl;
//     cout<<"Sum3:"<<sum3(3.5,4.2)<<endl;

//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////
// Printing Sum by using Template
#include <iostream>
using namespace std;
template <class T>
T sum(T a ,T b){
    T result;
    result=a+b;
    return result;
}
int main(){
    int i=5, j=6, k;
    double f=2.0, g=0.5, h;
    k=sum<int>(i,j);
    h=sum<double>(f,g);
    cout<<k<<'\n';
    cout<<h<<'\n';
    return 0;
}
