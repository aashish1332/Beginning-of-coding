#include <iostream>
using namespace std;
class student{
    int age;
    int rollno;
public:  void setvalues(int age,int rollno){   //setter function
        this->age = age;       // using 'this' pointer to resolve naming conflict
        this->rollno = rollno;            // 'this' pointer refers to the current object
    }
    void getvalues(){         //getter function
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main(){
    int size=5;
    student* s=new student[size]; // dynamic array of objects
    student* head=s; // to keep track of the starting address
    for(int i=0;i<size;i++){
        int a,b;
        cin>>a>>b;
        (*s).setvalues(a,b);      // or s->setvalues(a,b);
        s++;
    }
    for(int i=0;i<size;i++){
        head[i].getvalues();       // same as (*s)
        s++;
    }
    delete[] head; // free dynamically allocated memory
    return 0;
}