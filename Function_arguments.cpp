#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    int setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void sum_of_two_complex_number(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printdata()
    {
        cout << "Your Complex number is : " << a << " + " << b << "i " << endl;
    }
};

int main()
{

    complex comp1, comp2, comp3;
    comp1.setdata(45, 55);
    comp1.printdata();

    comp2.setdata(55, 45);
    comp2.printdata();

    comp3.sum_of_two_complex_number(comp1, comp2);
    comp3.printdata();

    return 0;
}
