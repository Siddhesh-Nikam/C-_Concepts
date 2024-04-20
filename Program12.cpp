
// /Demonstration of static characteristics and behaviour

#include<iostream>
using namespace std;

class Demo
{
    public: 
        int i,j;
        static int x;

    Demo(int a=10,int b=20)
    {
        cout<<"Inside parametrised constructor"<<endl;
        this->i=a;
        this->j=b;
    }

    void fun(int iNo)
    {
        cout<<"Inside non static fun"<<endl;
        cout<<this->i<<endl;
        cout<<this->j<<endl;
    }

    static void gun(int iValue)
    {
        cout<<"Inside static gun"<<endl;

    }
};

int Demo::x=30;

int main()
{
    cout<<Demo::x<<endl;

    Demo::gun(11);

    Demo obj(11,21);

    obj.fun(21);
    cout<<sizeof(obj)<<endl;

    cout<<obj.i<<endl;
    cout<<obj.j<<endl;

    obj.gun(11);

    return 0;
}

