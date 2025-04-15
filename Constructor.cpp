#include<iostream>
using namespace std;
class myclass {
    public:
    myclass(){
        cout<<"Hello";
    }
};
int main(){
    myclass t1;
}


// Constructor Overloading
#include<iostream>
using namespace std;
class test {
    public:
    int c;
    test(int a,int b){
        c=a+b;
        cout<<c<<endl;
    }
    test(){
        cout<<"Hello";
    }
    test(string name){
        cout<<"hii "<<name<<endl;
    }
};
int main(){
    test t1(89,80);
    test t2();
    test t3("yash");
}

