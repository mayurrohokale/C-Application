#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;
    
    public:
        Base()
        {
            A = 10;
            B = 20;
            C = 30;
        }
};

class Derived : public Base
{
    public:
        int X;
        void Display()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
            cout<<C<<"\n";
        }
};

int main()
{
   Derived dobj;

   cout<<dobj.A<<"\n";
   cout<<dobj.B<<"\n";
   cout<<dobj.C<<"\n";
   cout<<dobj.X<<"\n";

   dobj.Display;


    return 0;
}


