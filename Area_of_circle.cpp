#include <iostream>
using namespace std;
//#define pi 3.14;
#include <iomanip>
int main()
{
    
    const float pi=3.14;
    int val=10;
    float result= val*val*pi;
    cout<<"Area of circle: "<<setw(10)<<result<<endl;
    cout<<"Area of circle: "<<setfill('1')<<setw(10)<<result<<endl;
    cout<<"Area of circle: "<<showpos<<result<<endl;
    
// cout<<sizeof(val);
// cout<<sizeof(result);
// cout<<sizeof(3.14f);
    return 0;
}
