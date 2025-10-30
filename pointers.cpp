#include <iostream>
using namespace std;
class student{
    int age;
    int rollno;
public:  void setvalues(int a,int b){   //setter function
        age = a;
        rollno = b;
    }
    void getvalues(){         //getter function
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main(){
    int a = 10;
    int* p = &a; // pointer to integer a
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;
    int arr[5]={1,2,3,4,5};
    int* q= &arr[5];
    
    cout<<"Address of first element: "<<q<<endl;
    cout<<"------------------------------------------"<<endl;
    student s;
    student* ptr= &s; // pointer to student object s
    ptr->setvalues(21,102); // using pointer to set values
    ptr->getvalues(); // using pointer to get values
    //also
    s.setvalues(22,103); // using object to set values
    s.getvalues(); // using object to get values

    return 0;
}