#include<iostream>
using namespace std;

int sum(int a, int b){   // Here a and b are known as formal parameters.
    int c = a + b;
    return c;
}

void print_hello_world(){
    cout<<"Hello World";
}

 int main(){ 
     
     int num1, num2;   // Here num1 and num2 are known as actual parameters.
     cout<<"Enter the value of num1 : ";
     cin>>num1;
     
     cout<<"Enter the value of num2 : ";
     cin>>num2;
     
     cout<<"The sum of num1 and num2 is : "<<sum(num1, num2)<<endl;
     print_hello_world();

     return 0;
}
