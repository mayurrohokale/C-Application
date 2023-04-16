#include<iostream>
using namespace std;

class Base1
{
    public:
        

        virtual void fun()
        {
            cout<<"Base fun\n";
        }

};



int main()
{
   
    Base1 obj;

    cout<<sizeof(obj);
   
    return 0;
}