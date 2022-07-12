#include <iostream>
using namespace std;
int main()
{
    int sec;
    cout<<"time in sec: ";
    cin>>sec;
    
    short hr=sec/3600;
    sec=sec%3600;
    short min=sec/60;
    sec=sec%60;
    
    cout<<hr<<"hrs "<<min<<"mins "<<sec<<"secs";
    
    return 0;
}
