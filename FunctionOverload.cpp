#include<iostream>

using namespace std;

class Demo
{
    public:
        
        int Addition(int No1, int No2)              //Addition@2ii(Demo *this, int No1, int No2)
        {
            cout<<"Addition of 2 integers"<<"\n";
            return No1 + No2;
        }
        int Addition(int No1, int No2, int No3)   //Addition@3iii(Demo *this, int No1, int No2, int No3)
        {
            cout<<"Addition of 2 integers"<<"\n";
            return No1 + No2;
        }
        float Addition(float No1, float No2)        //Addition@2ff(Demo *this, float No1, float No2)
        {
            cout<<"Addition of 2 integers"<<"\n";
            return No1 + No2;
        }
        double Addition(double No1, double No2)     //Addition@2dd(Demo *this, double No1, double No2)
        {
            cout<<"Addition of 2 integers"<<"\n";
            return No1 + No2;
        }
       
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(10,11);     //Addition@2ii(&obj, 10 ,11)
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = obj.Addition(10,11,51);      //Addition@3iii(&obj, 10 ,11, 51)
    cout<<"Addition is : "<<iRet<<"\n";

    float fRet = obj.Addition(10.5f,90.7f); //Addition@2ff(&obj, 10.5f ,90.7f)
    cout<<"Addition is : "<<fRet<<"\n";

    double dRet = obj.Addition(10.12,11.34);    //Addition@2dd(&obj, 10.12 ,11.34)
    cout<<"Addition is : "<<dRet<<"\n";
    
    return 0;
}