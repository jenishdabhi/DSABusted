#include<iostream>
using namespace std;
int func(int a){

    int num=a;
    int& ans=num;
    return ans;

}
int fun(int n){
    int* ptr=&n;
    return ptr;
}

int main(){
    // int i=5;
    // int& j=i;

    // cout<< i <<endl;
    // i++;

    // cout<< i<< endl;
    // j++;

    // cout<< j<<endl;
    // cout<< i<< endl;
    fun(n);

    return 0;
}
