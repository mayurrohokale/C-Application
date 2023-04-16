#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        int B;

    // Parameterised constructor with default arguments
        Demo(int i, int j = 20)
        {
            A = i;
            B = j;
        }

};

int main()
{
    
    Demo obj2(11);
    Demo obj3(11,21);

    cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";
    cout<<obj3.A<<"\n";
    cout<<obj3.B<<"\n";
    return 0;
}