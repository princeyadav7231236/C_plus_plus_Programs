#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n < 2)
    {

        return 1;
    }

    return n * factorial(n - 1); // This is the formula to calculate the Factorial.
}

int fibonacci_series(int n)
{
    //Fibonacci series --> 1  1  2  3  5  8  13  21  34  55  .............
    if (n < 3)
    {

        return 1;
    }

    return fibonacci_series(n - 1) + fibonacci_series(n - 2); //This is the formula to calculate the Fibonacci series.
}

int main()
{

    int number;
    cout << "Enter the number of which you want to calculate the Factorial : ";
    cin >> number;
    cout << "The Factorial of the given number " << number << " is : " << factorial(number) << endl;

    cout << "Enter the number of which you want to calculate the Fibonacci series : ";
    cin >> number;
    cout << "The Fibonacci series of the given number " << number << " is : " << fibonacci_series(number) << endl;

    return 0;
}
