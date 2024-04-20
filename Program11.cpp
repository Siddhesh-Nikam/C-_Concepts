
// /Demonstration of static characteristics

#include<iostream>
using namespace std;

class Demo
{
    public: 
        int i,j;
        static int x;

    Demo()
    {
        cout<<"Inside default constructor"<<endl;
        i=10;
        j=20;
    }
};

int Demo::x=30;

int main()
{
    cout<<Demo::x<<endl;

    return 0;
}

