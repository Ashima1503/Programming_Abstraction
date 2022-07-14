#include <iostream>
using namespace std;
int sum_of_digits(int num){
    if(num==0)
    return 0;
    int rem=0;
    rem=(num%10)+sum_of_digits(num/10);

    return rem;
}
int main(){
    int n;
    cin>>n;
    int result= sum_of_digits(n);
    cout<<result;
    return 0;
}
