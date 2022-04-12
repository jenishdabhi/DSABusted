#include <iostream>
using namespace std;

class hero
{
    private:
        int health;
    public:    
        char level;
        static int TimeToComplete;

    //constructor
    hero (){
        cout<<"Default constructor "<<endl;
    }
        //parameterized constructor

        hero(int health){
            
            this->health=health;
        }
        hero(int health,char level){
            this->level=level;
            this->health=health;
        }
    //copy constructor
    hero(hero&temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }
    void print()
    {
        cout <<"health is "<<this->health<<endl;
        cout <<"level is "<<this->level<<endl;
    }
    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
    //distructor
    ~hero(){
        cout<<"distructor is called "<<endl;
    }
    //scope resolution operator
    
};
int hero::TimeToComplete=5;

int main()
{
        cout<<hero::TimeToComplete<<endl;
        

  /*    //static
        hero a;

        //dynamic
   hero *b=new hero;

   hero suresh(70,'S');
   suresh.print();
    //copy constructor
   hero rutesh(suresh);
   rutesh.print();

    hero jenish(10);
    cout<<"address of jenish is "<<&jenish<<endl;
    jenish.gethealth();


    hero *ab=new hero;
    ab->print();

    hero temp(30,'J');
    temp.print();
  
 
  //static allocation
  hero a;
    a.sethealth(50);
    a.setlevel('B');

  cout<<"level is "<<a.level<<endl;
  cout<<"health is "<<a.gethealth()<<endl;
  
//dynamic allocation

hero *b=new hero;

 b->sethealth(70);
 b->setlevel('J');

cout<<"level is "<<(*b).level<<endl;
cout<<"health is "<<(*b).gethealth()<<endl;

cout<<"level is "<<b->level<<endl;
cout<<"health is "<<b->gethealth()<<endl;
    
    // creation of object1
  hero h1;
    cout << "H1 health is " << h1.gethealth() << endl;

    h1.sethealth(10);
    h1.level = 'C';

    cout << "health is " << h1.gethealth() << endl;
    cout<<"level is "<<h1.level<<endl;

    cout<<"Size of "<<sizeof(h1)<<endl; */

    return 0;
}