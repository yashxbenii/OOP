// polymorphism is basically one name many forms

// 1. compile time polymorphism (early binding , static binding)

#include<iostream>
using namespace std;
class test{
    int a=90;
    public:
    void show(){
        cout<<a;
    }
};

int main(){
    test t;
    t.show();
}

// 2. Runtime polymorphism(late binding, dynamic binding)
#include<iostream>
using namespace std;

class bank {
public:
    virtual void roi() {        // Pure virtual function (abstract method)
        cout<<"parent";
    } 
};

class axis : public bank {
public:
    void roi() override {
        cout << "8";
    }
};

class pnb : public bank {
public:
    void roi() override {
        cout << "7";
    }
};

int main() {
    pnb p;
    p.roi(); 
}

// Method overiding
#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"parent calling";
    }
};
class child:public parent{
    public:
    void show(){
        cout<<"child calling";
    }
};
int main(){
    child c;
    c.show();
}

// if you want to call parent class member functions
#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"parent calling";
    }
};
class child:public parent{
    public:
    void show(){
        cout<<"child calling";
    }
};
int main(){
    parent p=child();
    p.show();
}

// accesssing varibale from parent and child
#include<iostream>
using namespace std;
class base{
    public:
    int a=40;
};
class derived:public base{
    public:
    int a=90;
};
int main(){
    base b=derived();
    derived d=derived();
    cout<<b.a<<endl<<d.a;
}

// Method overloading
#include<iostream>
using namespace std;
class test{
    int c;
    float d;
    public:
    void add(int x,int y){
        c=x+y;
    }
    void add(float x,float y){
        d=x+y;
        cout<<d;
    }
};
int main(){
    test t;
    t.add(5.3f,9.6f);
}

// example 1
#include<iostream>
using namespace std;
void fun(int);
void fun(float);
void fun(int i){
    cout<<"value of i is"<<i<<endl;
}
void fun(float j){
    cout<<"value of j is"<<j<<endl;
}
int main(){
    fun(12);
    fun(1.2f);
    return 0;
}

// example 2
#include<iostream>
using namespace std;
void fun(int);
void fun(int &);
int main(){
    int a=90;
    fun(a); // ambiguity error complier confuse, instead pass value like that fun(10);
    return 0;
}
void fun(int x){
    cout<<"value of x is "<<x<<endl;
}
void fun(int &b){
    cout<<"value of b is"<<b<<endl;
}

// Operator overloading

// cannot overload operator
// 1.scope operator(::)
// 2.sizeofmember selector(.)
// 3.memeber pointer selector(*)
// 4.ternary operator(?.)

// syntax of operator overloading
// return_type class_name :: operator op(argument_list){
//     body
// }

#include<iostream>
using namespace std;
class test{
    int num;
    public:
    test(){
        num=8;
    }
    void operator ++(){
    num=num+2;
    }
void print(){
    cout<<"the count is "<<num;
  }
};
int main(){
    test t;
    ++t;
    t.print();
}

// pure virtual function
#include<iostream>
using namespace std;
class base{
    public:
    virtual void show()=0;
};
class derived:public base{
    public:
    void show(){
        cout<<"Derived class is derived from the base class";
    }
};
int main(){
    base *p;
    derived d;
    p=&d;
    p->show();
    return 0;
}

//example
#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v){
        this->value=v;
    }
    int operator%(const Number& other) const {
        if (other.value == 0) {
            cerr << "Error: Division by zero!" << endl;
            return 0;
        }
        return value / other.value;  // returns quotient
    }

    int getValue() const { return value; }
};

int main() {
    Number a(9);
    Number b(3);
    int result = a % b; 
    cout<<result<<endl;
    return 0;
}










