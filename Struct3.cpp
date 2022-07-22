#include <iostream>
using namespace std;
struct product{
    int w;
    int p;
};

int main(){
    int i=0;
    cout<<"how many products: ";
    cin>>i;
    const int productCount=i;
    product pObj[productCount];
    for(int count=0; count<productCount;count++){
        cin>>pObj[count].w;
        cin>>pObj[count].p;
        cout<<"enter the details "<<count;
    }
    for(int count=0; count<productCount;count++){
        cout<<pObj[count].w;
        cout<<pObj[count].p;
    }
    return 0;
}
