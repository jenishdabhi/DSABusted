#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==1){
        return a; 
    }if(b==0){
        return 1;
    }

    int ans=power(a,b/2);
      //Recursive call
      if(b%2==0){
          return ans*ans;
      }else{
          return a*ans*ans;
      }
}

int main(){

        int a,b;
        cin>>a>>b;
        cout<<endl;

    int ans=power(a,b);
    cout<<"Power is "<<ans<<endl;


    return 0;
}