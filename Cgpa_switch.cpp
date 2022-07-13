 #include <iostream>
using namespace std;

int main()
{
    int students,cgpa;
    cout<<"Enter students: ";
    cin>>students;
    while(students>0){
        cout<<endl;
        cout<<"Enter cgpa: ";
        cin>>cgpa;
        switch(cgpa){
        case 10 :
        cout<<"Outstanding";
        break;
        case 9 :
        cout<<"Excellent";
        break;
        case 8 :
        cout<<"Very Good";
        break;
        case 7 :
        cout<<"Good";
        break;
        case 6 :
        case 5 :
        cout<<"Fine";
        break;
        case 4 :
        cout<<"Satisfactory";
        break;
        
        default:
        cout<<"Reappear";
        }
        students--;
    }
    
     return 0;
}
