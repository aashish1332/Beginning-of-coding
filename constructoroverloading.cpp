#include<iostream>
using namespace std;
class student {
    public:
    int age;
    string name;
    // student(){
    //     cout << "Default Constructor Called" << endl;
    // }
    student(int a) {              // Parameterized constructor
        age = a;
    }
    // student(int a, string n) {   // Overloaded constructor
    //     age = a;
    //     name = n;
    // }
    student(int a=20, string n="Unknown") { // Constructor with default arguments
        age = a;
        name = n;
    }
    // student(const student& s) { // Copy constructor --shallow copy
    //     age = s.age;
    //     name = s.name;
    // }
    // student(const student& s) { // Copy constructor --deep copy
    //     *age = ;
    //     name = s.name;
    // }
    ~student() { // Destructor
         cout << "Destructor Called"<< endl;
    }
};
int main() {
    //student s1; // Default constructor called
    //student s1(20); // Parameterized constructor called
    //cout << "Age of student s1: " << s1.age << endl;
    student s2(22, "Alice"); // Overloaded constructor called
    cout << "Age of student s2: " << s2.age << ", Name: " << s2.name << endl;
    student s3(20, "Yash");
    cout << "Age of student s3: " << s3.age << ", Name: " << s3.name << endl;
    student s4 = s3; // Copy constructor called
    cout << "Age of student s4: " << s4.age << ", Name: " << s4.name << endl;
    return 0;
}