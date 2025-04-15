// Data Shadowing
#include<iostream>
using namespace std;
class shadowing {
    int id;
    string name;
    float salary;
    public:
    shadowing(int id,string name,float salary){
        this->id=id;
        this->name=name;
        this->salary=salary; 

        cout<<id<<name<<salary;
    }
};
int main(){
    shadowing s(12,"yash",47.2);
}

// Creating a setter method
#include<iostream>
using namespace std;
class test {
    int x;
    public:
   void SetX(int x){
    this->x=x;
   }
   void print(){
    cout<<x;
   }
};
int main(){
    test t;
    t.SetX(70);
    t.print();
}