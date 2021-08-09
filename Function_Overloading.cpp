#include <iostream>
using namespace std;

int sum(float a, int b)
{
    return a + b;
}
int sum(float a, int b, int c)
{
    return a + b + c;
}
//Volume of Cylinder.
float volume(float r, float h)
{
    return (3.14 * r * r * h);
}
//Volume of Cube.
float volume(float a)
{
    return (a * a * a);
}
//Volume of Cuboid.
float volume(float a, float b, float c)
{
    return (a * b * c);
}

int main()
{
    float a, b, c;
    cout << "Enter First number : ";
    cin >> a;
    cout << "Enter Second number : ";
    cin >> b;
    cout << "Enter Third number : ";
    cin >> c;

    cout << "The sum of First and Second number is : " << sum(a, b) << endl;
    cout << "The sum of First, Second and Third number is : " << sum(a, b, c) << endl;
    cout << "Volume of Cylinder is : " << volume(a, b) << endl;
    cout << "Volume of Cube is : " << volume(a) << endl;
    cout << "Volume of Cuboid is : " << volume(a, b, c) << endl;

    return 0;
}
 