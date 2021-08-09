#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend class calculator;
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
};

class calculator
{
public:
    int sumRealNumber(complex o1, complex o2)
    {
        int sumReal = (o1.a + o2.a);
        return sumReal;
    }

    int sumComplexNumber(complex o1, complex o2)
    {
        int sumReal = (o1.b + o2.b);
        return sumReal;
    }
    int newComplexNumber(int a1, int b1)
    {
        cout << "Your Complex number is : " << a1 << " + " << b1 << "i " << endl;
    }
};

int main()
{
    complex comp1, comp2;
    comp1.setNumber(45, 55);
    comp2.setNumber(45, 55);

    calculator calc;
    int resReal = calc.sumRealNumber(comp1, comp2);
    int resComp = calc.sumComplexNumber(comp1, comp2);

    cout << "The sum of Real part of the complex number is : " << resReal << endl;
    cout << "The sum of Complex part of the complex number is : " << resComp << "i " << endl;
    calc.newComplexNumber(resReal, resComp);

    return 0;
}
