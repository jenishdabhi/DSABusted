#include <iostream>
using namespace std;

class human
{
public:
    int hight;
    int weight;
    int age;

public:
    int getage()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};
class male : public human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
};

int main()
{
    male object1;
    cout << object1.age << endl;
    object1.sleep();

    object1.setweight(70);
    cout << object1.weight << endl;

    return 0;
}