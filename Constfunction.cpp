#include<iostream>
using namespace std;

//constant function is such a function witch cannot change 
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
        void fun()
        {
            A++;    //A
            B++;    //A
           // C++;    //NA
            //D++;    //NA
        }
        void gun() const
        {
  //          A++;    //NA
    //        B++;    //NA
    //        C++;    //NA
      //      D++;    //NA
        } 
};

int main()
{

    Demo obj1(11,21,51,101);
    const Demo obj2 (11,21,51,101);

    obj1.fun();
    obj1.gun();
    
    obj2.fun();
    obj2.gun();

    cout<<obj1.A<<"\n";
    cout<<obj1.B<<"\n";

    cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";

    return 0;
}