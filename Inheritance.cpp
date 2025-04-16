// cons:
// 1.code duplicacy
// 2.increased code complexitiy
// 3.higher response time

// Inheritance:
// parent( base class)
// child( derived class)

// types:

// 1. single level inheritance   A->B
#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout<<"Parent is called"<<endl;
    }
};
class base: public parent{
    public:
    void dis(){
        cout<<"parent is called";
    }
};
int main(){
    base b;
    b.show();
    b.dis();
}

// input two variable in parent and compare in child

#include<iostream>
using namespace std;
class parent{
    public:
    int a,b;
    void varibale(int a,int b){
        this->a=a;
        this->b=b;
    }
};
class bass: public parent{
    public:
    void compare(){
        if(a>b){
            cout<<"A is greater";
        }
        else{
            cout<<"b is greater";
        }
    }
};
int main(){
    bass b1;
    b1.varibale(40,50);
    b1.compare();
}

// 2.Mutli-level inheritance
#include<iostream>
using namespace std;
class parent{
    public:
    int a,b;
    void print(){
        cout<<"grandparent"<<endl;
    }
};
class mid: public parent{
    public:
    void print2(){
        cout<<"parent"<<endl;
    }
};
class last: public mid{
    public:
    void print3(){
        cout<<"child";
    
    }
};
int main(){
    last l;
    l.print();
    l.print2();
    l.print3();
}

// area of circle class1-input class2-logic class3-print
#include<iostream>
using namespace std;
class input{
    public:
    float r,c;
    float pi=3-14; 
    void printt(int r){
        this->r=r;
    }
};
class logic: public input{
    public:
    void print1(){
        c=pi*r*r;
    }
};
class print: public logic{
    public:
    void print2(){
        cout<<"area of circle is"<<c; 
    }
};
int main(){
    print p;
   p.printt(20);
   p.print1();
   p.print2();

}

// 3.Mutiple inheritance
// class a{}
// class b{}
// class c : public a,public b;

// 4.heirarcial inhertance
// class a{}
// class b:public a;
// class c:public a;
// class d:public b;
// class e:public b;

// 5.Hybrid inheritance
// class a{}
// class b: public a{}
// class c: public a{}
// class d: public b, public c;



    

