#include<iostream>
using namespace std;

 int main(){ 
     int a = 45;
     int *b = &a;  // The " & " ampersand is known as "address of " and " * " astrisk is known as " value at ".
     cout<<"The address of a is &a and b : "<< &a <<endl;
     cout<<"The address of a is &a and b : "<< b <<endl;
     cout<<"The value at address b is : "<< *b <<endl;

     cout<<"Pointer to pointer : "<<endl;
     int **c = &b; // The " & " ampersand is known as "address of " and " * " astrisk is known as " value at ".
     cout<<"The address of b is &b and c : "<< &b <<endl;
     cout<<"The address of b is &b and c : "<< c <<endl;
     cout<<"The value at address c is : "<< *c <<endl;
     cout<<"The value at address c is : "<< **c <<endl;
     
     int ***d = &c;  // Like this we can create Pointer to Pointer and store the address of the variable
     cout<<"The address of b is &c and d : "<< &c <<endl;
     cout<<"The address of b is &c and d : "<< d <<endl;
     cout<<"The value at address d is : "<< *d <<endl;
     cout<<"The value at address d is : "<< **d <<endl;
     cout<<"The value at address d is : "<< ***d <<endl;

     return 0;
}
