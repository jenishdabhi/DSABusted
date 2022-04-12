#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation of map
    unordered_map<string,int>m;

    //insertion map
    //1
    pair<string,int>p=make_pair("jenish",3);
    m.insert(p);
    
    //2
    pair<string,int>pair2("dabhi",2);
    m.insert(pair2);

    //3
    m["meera"]=1;
    m["meera"]=2;

    //search
    cout<<m["meera"]<<endl;
    cout<<m.at("jenish")<<endl;

    cout<<m.size()<<endl;
    
    //check presence
    cout<<m.count("broo")<<endl;
    
    m.erase("dabhi");
    cout<<m.size()<<endl;

    //iterator
    unordered_map<string,int>::iterator it=m.begin();

    while (it !=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    

    

    return 0;
}
