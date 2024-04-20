#include<iostream>
using namespace std;

class Base
{
    public:

    int x,y;

    Base()
    {
        cout<<"Inside base constructor"<<endl;
    }

    ~Base()
    {
        cout<<"Inside base destructor"<<endl;
    }

    void fun()
    {
        cout<<"Inside base fun"<<endl;
    }
};

class Derived : public Base
{
    public:

    int i,j;

    Derived()
    {
        cout<<"Inside derived constructor"<<endl;
    }

    ~Derived()
    {
        cout<<"Inside derived destructor"<<endl;
    }

    void gun()
    {
        cout<<"Inside base fun"<<endl;
    }
};

int main()
{
    Derived dobj;

    cout<<sizeof(Base)<<endl;
    cout<<sizeof(Derived)<<endl;

    dobj.fun();

    dobj.gun();

    return 0;
}