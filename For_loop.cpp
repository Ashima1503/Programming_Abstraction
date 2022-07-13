 #include <iostream>
using namespace std;

int main()
{
    int counter=0;
    bool flag=true;
    for(;flag;counter++){
        cout<<"This is a test"<<endl;

        if(counter>10){
            flag=false;
        }
    }
    
    return 0;
}
