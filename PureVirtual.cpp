#include<iostream>
using namespace std;

// Abstract class : It is a class which contains  at leastsingle pure virtual function in it.

class Base
{
    public:
        int A,B;
        //1000
        int Addition(int i, int j)  //concreate function
        {
            return i+j;
        }
        //2000
        virtual int Substraction(int i, int j)   //concreate function
        {
            return i-j;
        }

        virtual int Multiplication(int i,int j) = 0;    //Abstract function
        
};  

class Derived : public Base
{
    public:
        int X,Y;

        //3000
        int Substraction(int i, int j)      //concreate function
        {
            int Ans = 0;
            Ans = i - j;
            return Ans;
        }

        //4000
        int Multiplication(int i, int j)        //concrete function
        {
            return i * j;
        }
};
int main()
{   
  //  Base bobj;      // Not Allowed
    Base *bp = new Derived();

    int Ret = 0;
    Ret = bp->Addition(10,11);              //Base Addtion
    cout<<"Addition is : "<<Ret<<"\n";      //21
    int sRet = 0;   
    sRet = bp->Substraction(10,11);          // Derived Substraction 
    cout<<"Substraction is : "<<sRet<<"\n"; // -1
    int mRet = 0;
    mRet = bp->Multiplication(10,11);           //Derived Multiplication
    cout<<"Multiplication is : "<<mRet<<"\n";   //110

    return 0;
}