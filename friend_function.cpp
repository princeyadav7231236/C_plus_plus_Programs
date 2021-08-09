#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex sum_of_two_complex_number(complex o1, complex o2); // This line says that the function sum_of_two_complex_number is a friend of complex class.

public:
    int setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void printdata()
    {
        cout << "Your Complex number is : " << a << " + " << b << "i " << endl;
    }
};

complex sum_of_two_complex_number(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    complex comp1, comp2, sum;
    comp1.setdata(45, 55);
    comp1.printdata();

    comp2.setdata(55, 45);
    comp2.printdata();

    sum = sum_of_two_complex_number(comp1, comp2);
    sum.printdata();

    return 0;
}
