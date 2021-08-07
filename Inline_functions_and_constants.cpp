#include<iostream>
using namespace std;

inline int product(int a, int b){  // This function will print the product of two numbers.
    return a * b;
}

float current_money(float current_money, float factor = 1.01){   
// Here, we are assigning factor with the constant value of 1.01.
//    If we will not pass the value of factor then constant value of factor will be used.
    return current_money * factor;
}

 int main(){ 
     int num1, num2;
     cout<<"Enter the value of num1 : ";
     cin>>num1;
     
     cout<<"Enter the value of num2 : ";
     cin>>num2;
     
     cout<<"The product of num1 and num2 is : "<<product(num1, num2)<<endl;
     
     float money;
     cout<<"Enter your current money : ";
     cin>>money;
     cout<<"If you have "<<money<<" Rs. in your bank account, the it will be "<<current_money(money)<<" Rs. after 1 year."<<endl;
     cout<<"For VIP : If you have "<<money<<" Rs. in your bank account, the it will be "<<current_money(money, 1.1)<<" Rs. after 1 year."<<endl;

     return 0;
}
