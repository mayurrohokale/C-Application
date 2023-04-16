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
        }

        void fun()
        {
            cout<<"Inside non static function fun"<<"\n";
        }
        static void gun()
        {
            cout<<"Inside static function gun"<<"\n";
        }

};
//Initialisation of static characterisitcs 
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    Demo::gun();

    Demo obj;


    return 0;
}