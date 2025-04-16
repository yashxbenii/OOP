
// We can access the private data memebers outside the class by using friend function
// Syntax : class class_name{
//     friend data_type function_name(arguments);
// };

#include<iostream>
using namespace std;
class box{
    int length;
    public:
    box(){
        length=0;
    }
    friend int printlength(box); // friend function
};
int printlength(box b){
    b.length+=10;
}
int main(){
    box b;
    cout<<"length of box "<<printlength(b)<<endl;
}

// Addition using friend function
#include<iostream>
using namespace std;
class add{
    int a,b;
    public:
    int c;
    add(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend int addition(add);
};
int addition(add a){
    a.c=a.a+a.b;
}
int main(){
    add a(10,20);
    cout<<"Addition of a&b is "<<addition(a);

}
