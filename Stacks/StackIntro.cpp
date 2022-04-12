#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public: 
        int *arr;
        int top;
        int size;

    Stack(int size){
        this -> size=size;
        arr= new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack is underflow"<<endl;
        }

    }
    int peek(){
        if(top>=0){
        return arr[top];
        }
        else{
            cout<<"stack is Empty"<<endl;
            return -1;
        }
    }
    bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
    }

};

int main()
{
   
   stack st(50);
   st.push(22);
   st.push(43);
   st.push(44);

   cout<<st.peek()<<endl;
   
   
   
    // create stack
    /*
    stack<int> s;

    s.push(1);
    s.push(2);
    s.pop();

    cout << "Printing Stack - " << s.top() << endl;
    cout << "Size - " << s.size() << endl;

    if (s.empty())
    {
        cout << "Stck is empty" << endl;
    }
    else

        cout << "Stack is not empty" << endl;
    */
    
    return 0;
}