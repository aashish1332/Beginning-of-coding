#include<bits/stdc++.h>
using namespace std;
// Normal way
// class dog{
//     public:
//     void sleep(){
//         cout<<"zzzzzzz......";
//     }
//     void eat(){
//         cout<<"I am eating.";
//     }
//     void bark(){
//         cout<<"Bark......."<<endl;
//     }
// };
// class cat{
//     public:
//     void sleep(){
//         cout<<"zzzzzz......";
//     }
//     void eat(){
//         cout<<"I am eating.";
//     }
//     void meow(){
//         cout<<"Meowwww......"<<endl;
//     }
// };
// class bird{
//     public:
//     void sleep(){
//         cout<<"zzzzzzz.......";
//     }
//     void eat(){
//         cout<<"I am eating.";
//     }
//     void fly(){
//         cout<<"woooooo......"<<endl;
//     }
// };

class animal{   //Hierarical Inheritance
    public:
    void sleep(){
        cout<<"zzzzzz....."<<endl;
    }
    void eat(){
        cout<<"I am eating."<<endl;
    }
};
class dog : public animal{
    public:
    void sound(){
        cout<<"woff....."<<endl;
    }
};
class cat : public animal{
    public:
    void sound(){
        cout<<"meowww..."<<endl;
    }
};
class bird : public animal{
    public:
    void sound(){
        cout<<"chirp....."<<endl;
    }
};
//Multilevel inheritance
class grandfather{
    public:
    void eat(){
        cout<<"Eating....."<<endl;
    }
};
class father : public grandfather{
    public:
    void teeth(){
        cout<<"I have teeth."<<endl;
    }
};
class child : public father{
    public:
    void play(){
        cout<<"I am playing."<<endl;
    }
};

//Multiple Inheritance
class A{
    public:
    void showA(){
        cout<<"I am A"<<endl;
    }
};
class B{
    public:
    void showB(){
        cout<<"I am B"<<endl;
    }
};
class C : public A , public B{  //Multiplly inherited
    public:
    void showC(){
        cout<<"I am C"<<endl;
    }
};

int main(){
    dog d;
    d.sleep();
    d.sound();

    cat c;
    c.eat();
    c.sound();

    bird b;
    b.sleep();
    b.sound();

    grandfather g;
    g.eat();

    father f;
    f.teeth();
    f.eat();

    child s;
    s.teeth();
    s.play();
    s.eat();

    C cc;
    cc.showA();
    cc.showB();
    cc.showC();


    return 0;
}