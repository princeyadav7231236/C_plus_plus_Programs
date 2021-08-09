#include <iostream>
using namespace std;

class binary
{
    string b;
    void chk_binary(void);

public:
    void set_binary(void);
    void get_complement(void);
    void display_binary(void);
};

void binary::set_binary()
{
    cout << "Enter a binary number : ";
    cin >> b;
}

void binary ::chk_binary()
{ // In this we will check wether the entered number is binary or not if not then the program will exit.
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) != '0' && b.at(i) != '1')
        {
            cout << "You entered a wrong number. " << endl;
            exit(0);
        }
    }
}

void binary ::get_complement()
{ // In this we will change the number, this means that the place where the number is " 0 " it will be changed to " 1 ", and vise-versa.
    chk_binary();
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) == '0')
        {
            b.at(i) = '1';
        }
        else if (b.at(i) == '1')
        {
            b.at(i) = '0';
        }
    }
}

void binary::display_binary()
{ //This will display our new binary number.
    cout << "Your new binary number is : " << b << endl;
}

int main()
{

    binary binary_number;
    binary_number.set_binary(); // Calling all the functions defined in the class.
    binary_number.get_complement();
    binary_number.display_binary();

    return 0;
}
