

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
class human
{
public:
    string color;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};
// multiple inheritance
class hybrid : public animal, public human
{
};

int main()
{

    hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}