#include<iostream>
using namespace std;

 int main(){ 
     int a = 45, b = 55;
     cout<<"Operators in C++ : "<<endl;
     
     cout<<"Arithematic Operators :- "<<endl;
     cout<<"a + b is :- "<<a + b<<endl;
     cout<<"a - b is :- "<<a - b<<endl;
     cout<<"a * b is :- "<<a * b<<endl;
     cout<<"a / b is :- "<<a / b<<endl;
     cout<<"a % b is :- "<<a % b<<endl;
     cout<<"a++ is :- "<<a++<<endl;
     cout<<"a-- is :- "<<a--<<endl;
     cout<<"++a is :- "<<++a<<endl;
     cout<<"--a is :- "<<--a<<endl;
     cout<<endl;

     cout<<"Assignment Operators :-"<<endl;
     float d = 45.12544, c = 55.41564;
     cout<<" = is known as the aAssignment Operator which assigns the value to the Variables.";
     cout<<endl;  // The = equal to sign is known as the Assignment Operator.

     cout<<"Comparision Operators :-"<<endl;  // These all will return Boolean results i.e., True ( 1 ) or False ( 0 ).
     cout<<"a == b is :- "<<( a == b )<<endl;
     cout<<"a != b is :- "<<( a != b )<<endl;
     cout<<"a <= b is :- "<<( a <= b )<<endl;
     cout<<"a >= b is :- "<<( a >= b )<<endl;
     cout<<"a > b is :- "<<( a > b )<<endl;
     cout<<"a < b is :- "<<( a < b )<<endl<<endl;

     cout<<"Logical Opearators :- "<<endl;  // This will return Boolean results i.e., True ( 1 ) or False ( 0 ).
     cout<<"The value of ((a==b) && (a<b)) is :- "<<((a==b) & (a<b))<<endl; // The " && " or " & " symbol is known as "ampersand" and here it means " and ".
     cout<<"The value of ((a==b) || (a<b)) is :- "<<((a==b) || (a<b))<<endl; // This " || " symbol means " or ".
     cout<<"The value of (!(a==b)) is :- "<<(!(a==b))<<endl; // This " ! " sumbol means " Not equal to " .

     return 0;
}

