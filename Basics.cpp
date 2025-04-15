// area of circle
#include<iostream>
using namespace std;
class circle {
    public:
    float pi=3.14;
    float r;
    float ans;
    void input(){
        cout<<"enter radius"<<endl;
        cin>>r;
    }
    void logic(){
        ans=pi*(r*r);
    }
    void display(){
        cout<<"Area of circle"<<ans<<endl;
    }
};
int main(){
    circle c;
    c.input();
    c.logic();
    c.display();
}

// Average
#include<iostream>
using namespace std;
class average {
    public:
    float a,b;
    void avg(float a,float b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"Average is"<<(a+b)/2;
    }
};
int main(){
    average a1;;
    a1.avg(71.3,23.4);
    a1.display();
}

// Compare
#include<iostream>
using namespace std;
class compare {
    public:
    void difference(int a,int b){
        if(a>b){
            cout<<"a is greater";
        }
        else{
            cout<<"b is greater";
        }
    }
};
int main(){
    compare c1;;
    c1.difference(14,21);
}
// Static keyword
#include<iostream>
using namespace std;
class account{
    public:
    int accno;
    string name;
    static float rateofint;
    
    account(int accno,string name){
        this->accno=accno;
        this->name=name;
    }
    void display(){
        cout<<accno<<" "<<name<<" "<<rateofint<<endl;
    }  
};
float account::rateofint=7.25;
int main(){
    account a1=account(101,"john");
    account a2=account(99,"yash");
    a1.display();
    a2.display();

}






