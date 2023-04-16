#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11), D(21)
        {
            A = 0;
            B = 0;
            cout<<"Inside Default\n";
        }
        Demo(int i , int j, int k, int l) : C(k), D(l)
        {
            A = i;
            B = j;
            cout<<"Inside Parameterised\n";
        }
};

int main()
{
    Demo obj;
    Demo obj2(11,21,51,101);

    cout<<obj.A<<"\n";
    cout<<obj.B<<"\n";
    cout<<obj.C<<"\n";
    cout<<obj.D<<"\n";
    cout<<"\n";
    cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";
    cout<<obj2.C<<"\n";
    cout<<obj2.D<<"\n";

    return 0;
}