#include<iostream>
#include<iomanip>
using namespace std;

 int main(){ 
     
     int number;
     cout<<"Enter the number of which you want to know the table : ";
     cin>>number;
     cout<<"The table of "<< number <<" is : "<<endl;
     int i = 1;
     do
     {
         cout<< number << setw(2) <<" * "<< setw(2) << i << setw(2) << " = "<< setw(5) << number * i <<endl;
         // setw will set the width according to the given input number, this is done to get an neat and clean output.
         i++; // This will increase the value of " i " by one time.
     } while (i <= 10);  
     
     cout<<"To create an infinite While loop : "<<endl;
     int m = 1;
     do
     {
         cout<<m<<endl;  // For terninating a infinite for loop you need to press ( ctrl + c ). If you will not terminate it then it will consume your whole memory.
         m++;  // This will increase the value of " i " by one time.
     } while (true);  // In this you have to give a condition which is always true or you can simply pass " True ".
     
     return 0;
}
