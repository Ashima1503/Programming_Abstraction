#include <iostream>
using namespace std;

int main()
{
   int foo[5]={16,2,77,40,12071};
   cout<<"Address of foo variable is:"<<&foo<<endl;
   cout<<"value stored at 0 index of foo variable:"<<*foo<<endl;
   cout<<"value stored at 1 index of foo variable:"<<*(foo+1)<<endl;
   cout<<"Address stored at 0 index of foo variable:"<<foo<<endl;
   cout<<"Address stored at 1 index of foo variable:"<<(foo+1)<<endl;
   
   return 0;
}
