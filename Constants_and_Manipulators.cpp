#include<iostream>
#include<iomanip>
using namespace std;

 int main(){ 
     
     cout<<"Constants :- "<<endl;
     const int a = 100;
     cout<<"The value of a is : "<<a<<endl;
    //  a = 45;  Now if we will try to change the value of a the it will give you an error.

     cout<<"Manipulators :-"<<endl;
     int x = 45, y = 45565425, z = 8711247;
     cout<<"The value of x is "<<setw(10)<<x<<endl;  // The setw stands for " Set Width " and it arranges the output in a proper manner.
     cout<<"The value of y is "<<setw(10)<<y<<endl;
     cout<<"The value of z is "<<setw(10)<<z<<endl;

     cout<<"Operator Precedence :-"<<endl;
     int m = 45;
     float n = 55;
     int c = (m * 45) - 45*45;  // The operator with the highest precedence will operate first.
     int d = ((c *75) +(m*n)*574 +454);
     cout<<"The value of c is : "<<c<<endl;
     cout<<"The value of d is : "<<d<<endl;
     return 0;
}
