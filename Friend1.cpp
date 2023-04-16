#include<iostream>
using namespace std;
class Hello
{
    public:
        void gun();
        
};
class Demo
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;

    public:
        Demo(int i, int j ,int k)
        {
            A = i;
            B = j;
            C = k;
        }  
    friend void fun();
    friend void  Hello::gun();

};
void Hello::gun()
{
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";
}
void fun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";
}


int main()
{
    fun();
    Hello hobj;
    hobj.gun();

    return 0;
}