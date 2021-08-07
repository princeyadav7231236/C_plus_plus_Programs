#include<iostream>
#include<iomanip>
using namespace std;

 int main(){ 

     int number;
     cout<<"Enter the number of which you want to know the table : ";
     cin>>number;
     cout<<"The table of "<< number <<" is : "<<endl;
     for (int i = 1; i < 11; i++)
     {
         cout<< number << setw(2) <<" * "<< setw(2) << i << setw(2) << " = "<< setw(5) << number * i <<endl;
     }   // setw will set the width according to the given input number, this is done to get an neat and clean output.
     
     
     cout<<"To create an infinite for loop : "<<endl;
     for (int i = 0; 1 < 5; i++)   // In this you have to give a condition which is always true.
     {
        cout<<i<<endl;  // For terninating a infinite for loop you need to press ( ctrl + c ). If you will not terminate it then it will consume your whole memory.
     }
     

     return 0;
}
