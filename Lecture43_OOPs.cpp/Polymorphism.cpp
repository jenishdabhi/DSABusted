#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"This is Me"<<endl;
    }
    void sayHello(char name){
        cout<<"This is Me"<<endl;
    }
    void sayHello(string name){
        cout<<"This Me"<<endl;
    }
}; 
class animal{
    public:
        void speak(){
            cout<<"speaking"<<endl;
        }
};
class dog: public animal{
        public:
        void speak(){
            cout<<"barking"<<endl;
        }
};
int main(){
    A obj1;
    obj1.sayHello();
    dog obj2;
    obj2.speak();

    return 0;
}