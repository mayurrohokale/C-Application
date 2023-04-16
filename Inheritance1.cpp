#include<iostream>
using namespace std;

//parent class
class Demo
{
    public:
        int A,B;

        Demo()
        {
            A = 11;
            B = 21;
            cout<<"Inside Demo constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Demo destructor\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo\n";
        }
};

//child class
class Hello : public Demo       //class Hello extends Demo
{
    public:
        int X,Y;

        Hello()
        {
            X = 51;
            Y = 101;
            cout<<"Inside Hello Constructor\n";
        }
        ~Hello()
        {
            cout<<"Inside Hello destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of Hello\n";
        }
    
};


class PPA : public Hello       
{
    public:
        int I,J;

        PPA()
        {
            I = 111;
            J = 121;
            cout<<"Inside PPA Constructor\n";
        }
        ~PPA()
        {
            cout<<"Inside PPA destructor\n";
        }

        void Sun()
        {
            cout<<"Inside Sun of PPA\n";
        }
    
};

int main()
{
    cout<<"Inside main\n";
    cout<<"\n";
    cout<<"Size of Demo : "<<sizeof(Demo)<<"\n";
    cout<<"Size of Demo : "<<sizeof(Hello)<<"\n";
    cout<<"Size of Demo : "<<sizeof(PPA)<<"\n";
    cout<<"\n";

    PPA pobj;

    pobj.fun();
    pobj.gun();
    pobj.Sun();
    
    cout<<"\n";
    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";
    cout<<"\n";
    cout<<"End of main\n";
    cout<<"\n";
    return 0;
}