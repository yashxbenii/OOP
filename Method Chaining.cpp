// Method chaining
#include<iostream>
using namespace std;
class p {
    public:
    void show(){
        cout<<"inside show()";
    }
    void invoke(p* obj){
        obj->show();
    }
    void execute(){
        invoke(this);
    }
};
int main(){
    p a;
    a.execute();
}
