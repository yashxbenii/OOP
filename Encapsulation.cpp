#include<iostream>
using namespace std;
class emp{
    int salary;
    public:
    void setsalary(int s){  // setter funtion
        salary=s;    
    }
    int getsalary(){        // getter function
        return salary;
    }
};
int main(){
    emp obj;
    obj.setsalary(5000);
    cout<<obj.getsalary();
}


// roll name marks setter getter
#include<iostream>
using namespace std;
class student{
    int roll;
    string name;
    float marks;
    public:
    void setroll(int roll){  // setter funtion
        this->roll=roll;    
    }
    int getroll(){        // getter function
        return roll;
    }
    void setname(string name){  // setter funtion
        this->name=name;  
    }
    string getname(){        // getter function
        return name;
    }
    void setmarks(int marks){  // setter funtion
        this->marks=marks;   
    }
    int getmarks(){        // getter function
        return marks;
    }
};
int main(){
    student s1;
    s1.setroll(2);
    s1.setname("yash");
    s1.setmarks(55.5f);
    cout<<"roll no is "<<s1.getroll()<<endl;;
    cout<<"name is "<<s1.getname()<<endl;;
    cout<<"marks is "<<s1.getmarks()<<endl;;
}

// question
// create two class
// cuboid - have three fields length,width,height of int type + it should have display() to print all three fields 
// cuboidvol -it derived class from cuboid shoud have read input() to read values of all three fields shoud also
//  override display() to print volume of cuboid(l*w*h)

#include <iostream>
using namespace std;
class Cuboid {
protected:
    int length, width, height;
public:
    void display() {
        cout <<length<<" "<<width<<" "<<height<<endl;
    }
};
class CuboidVol : public Cuboid {
public:
    void readInput() {
        cin >> length >> width >> height;
        if (length > 0 && length < 100 && width > 0 && width < 100 && height > 0 && height < 100) {
            cout<<length<<" "<<width<<" "<<height<<endl;
            this->display();
             
        } else {
            cout << "False input"<<endl;
        }
    }
    void display() {
        int volume = length * width * height;
        cout <<length<<"*"<<width<<"*"<<height<<"="<<volume<<endl;
    }
};
int main() {
    CuboidVol c;
    c.readInput();
    return 0;
}

//lst of total marks&average marks 
#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    student(){
        cout<<"enter roll no";
        cin>>roll;
    }
};
class test: public student{                      // construtor not not inherite in derived class
    public:
    float sub1,sub2,sub3,sub4,sub5;
    test(){
        cout<<"enter marks of all 5 subjects";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    }
};
class result : public test{
    public:
    float total,average;
    void display(){
        total=sub1+sub2+sub3+sub4+sub5;
        average=total/5;
        cout<<roll<<" "<<total<<" "<<average;
    }
};
int main(){
    result r;
    r.display();
}

// ques
#include <iostream>
using namespace std;
class Myclass{
    public:
    void display(){
        cout<<"Hello world";
    }
};
int main(){
    Myclass m;
    m.display();
}

//ques to return nth number on fibonacci series
#include <iostream>
using namespace std;
class fibonacci{
    public:
    int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
  }
};
int main(){
    int a;
    fibonacci f;
    cout<<"enter number to find";
    cin>>a;
    cout<<f.fibo(a);
}





