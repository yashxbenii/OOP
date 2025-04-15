// Destructor
#include<iostream>
using namespace std;
class test {
    public:
    test(){
        cout<<"Hello"<<endl;;
    }
    ~test(){
        cout<<"clean";
    }
};
int main(){
    test t;
}