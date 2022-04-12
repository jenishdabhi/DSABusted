#include <iostream>
using namespace std;

class a{
public:
    void fun(){
        cout<<"inside the function"<<endl;
    }

};
class b: public a{
    public:
        void fun1(){
            cout<<"this is fun 1"<<endl;
        }
};
class c: public a{
public:
int weight;
void fun3(){
            cout<<"this is fun 3"<<endl;
        }

};
int main(){

    a obj1;
    obj1.fun();

    b obj2;
    obj2.fun1();
    obj2.fun();

    c obj3;
    obj3.fun3();
    obj3.fun();
   
    return 0;
}