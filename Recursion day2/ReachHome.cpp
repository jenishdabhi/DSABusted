#include<iostream>
using namespace std;
void ReachHome(int src,int des){

    cout<<"Source "<<src<<" Destination "<<des<<endl;
    //base case
    if(src==des){
        cout<<"Pahuch gaya"<<endl;
        return ;
    }
    src++;
    //recursive call
    ReachHome(src,des);
}
int main(){
    int src=1;
    int des=10;

    ReachHome(src,des);
    return 0;
}