#include <iostream>//struct is user defined type to declare multiple types of variables.
using namespace std;
struct student{
    int rollno;//elements
    float cgpa;//maximum value of these elements is allocated to other two i.e 4 so size of student=4+4+4=12
    char gender;
};
struct product{
    int weight;//maximum value of these elements is allocated to other two i.e 8 of double, so size of product=8+8=16
    double price;
};
int main(){
    student a;//a is object
    student b;
    a.rollno=1;
    a.cgpa=9.8;
    b.rollno=2;
    b.cgpa=9.9;
    cout<<a.rollno<<endl;
    cout<<a.cgpa<<endl;
    cout<<b.rollno<<endl;
    cout<<b.cgpa<<endl;
    product apple;//apple is object
    apple.weight=90;
    cout<<apple.weight<<endl;
    cout<<sizeof(a)<<endl;//sum of all size of variables in student
    cout<<sizeof(b)<<endl;
    cout<<&a<<endl;//address of a
    cout<<&b<<endl;
    cout<<&a.rollno<<endl;
    cout<<sizeof(apple);
    cout<<&apple<<endl;
    cout<<&apple.weight<<endl;

    return 0;
}
