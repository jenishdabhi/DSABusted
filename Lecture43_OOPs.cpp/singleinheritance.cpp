#include <iostream>
using namespace std;
class animal
{
public:
    int hight;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class dog : public animal
{
};

class germanshepher : public dog
{
};

int main()
{

    dog d;
    d.speak();

    cout << d.hight << endl;

    return 0;
}