#include <iostream>
using namespace std;
class Math{
public:
    int a,b;
    void sum(int x,int y){
        cout<<"Sum: "<<x+y<<endl;
    }
    // Declaration of inline function
    inline void sumofThreeNumbers(int x,int y,int z);
    //Non - inline func.
    void sumofFourNumbers(int w,int x,int y,int z);
};
// Definition of inline function
inline void Math::sumofThreeNumbers(int x,int y,int z) {
    cout << "Sum of three numbers: " << x + y + z << endl;
}
// Definition of non-inline function
void Math::sumofFourNumbers(int w,int x,int y,int z) {
    cout << "Sum of four numbers: " << w + x + y + z << endl;
}
int main() {
    Math math;
    math.sum(5, 10);
    math.sumofThreeNumbers(5, 10, 15);
    math.sumofFourNumbers(5, 10, 15, 20);
    return 0;
}