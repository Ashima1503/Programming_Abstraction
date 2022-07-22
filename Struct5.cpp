#include <iostream>
using namespace std;
struct gst{
    float rate;
};

struct product{
    int w;
    int p;
    int *taxvalue;
    gst *tax;
};

int main(){
    int i=0;
    int stdtax;
    cout<<"how many products:"<<endl;
    cin>>i;
    const int productCount=i;
    gst objGST;
    objGST.rate=5;
    product pObj[productCount];
    for(int count=0; count<productCount;count++){
        cout<<"enter the details "<<count<<endl;
        cin>>pObj[count].w;
        cin>>pObj[count].p;
    }
    for(int count=0; count<productCount;count++){
        
        cout<<"product number"<<count+1<<endl;
        cout<<pObj[count].w;
        cout<<pObj[count].p;
        cout<<pObj[count].taxvalue<<" : "<<&stdtax<<endl;
    }
    return 0;
}
