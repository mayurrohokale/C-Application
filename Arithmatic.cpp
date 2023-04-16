#include<iostream>

using namespace std;

class Arithematic
{
    private:
        int No1;
        int No2;
    
    public:
        Arithematic()
        {
            No1 = 0;
            No2 = 0;
        }
        Arithematic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }
        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
        int Substraction()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

}

int main()
{

    return 0;
}