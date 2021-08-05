#include<iostream>
using namespace std;

int f = 100;

 int main(){ 
     int a , b;
     cout<<"Enter the value of a : ";
     cin>>a;
     cout<<"Enter the value of b : ";
     cin>>b;
     cout<<"The sum is : "<<a + b<<endl;
     cout<<"The value of global variable f is : "<<::f <<endl; 

     float d = 45.98545;
     long double e = 55.4l;
     cout<<"The size of float d is :- "<<sizeof(d)<<endl;
     cout<<"The size of long double e is :- "<<sizeof(e)<<endl;  // Long double can store a larger value than a float

     cout<<"Reference variable"<<endl;
     float x = 45.5555;
     float &  y = x;  // This line means that y is pointing to the address of x which has the value of 45.5555. So, also stores the value of x.
     cout<<"The value of x is :- "<<x<<endl;
     cout<<"The value of y is :- "<<y<<endl;

     cout<<"Typecasting :-"<<endl;
     int m = 15;
     float n = 30.45412;
     cout<<"Now, the value of m is :-  "<<float(m)<<endl;
     cout<<"Now, the value of n is :-  "<<int(n)<<endl;

     cout<<"The value of (int(m) + float(n))  is :- "<<m +n<<endl;
     cout<<"The value of (int(m) + int(n))  is :- "<<m +int(n)<<endl;
     cout<<"The value of (float(m) + int(n))  is :- "<<float(m) +int(n)<<endl;
     return 0;
}
