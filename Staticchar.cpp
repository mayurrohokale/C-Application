#include<iostream>

using namespace std;

class Demo
{
    public:
        int A,B;            //Non static characteristics
        static int X, Y;    //Static characteristics

        Demo()              //Default constructor
        {
            // Initialisation of non static characterisitics
            A = 0;
            B = 0;
        };

};
//Initialisation of static characterisitcs 
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    cout<<"Value of X : "<<Demo::X<<"\n";
    cout<<"Value of XY: "<<Demo::XY<<"\n";
    
    Demo obj1;
    Demo obj2;

    cout<<"Size of demo class object is : "<<sizeof(obj1)<<"\n";
    return 0;
}