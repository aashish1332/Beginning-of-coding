#include<iostream>
using namespace std;
class Student{
    int age;
    int rollno;
public: void setvalues(int a,int b){   //setter function
        age = a;
        rollno = b;
    }
    void getvalues(){         //getter function
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main(){
    Student s1;
    s1.setvalues(20,101);
    s1.getvalues();
    return 0;
}