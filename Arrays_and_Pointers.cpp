#include<iostream>
using namespace std;

 int main(){ 
     int marks[] = {99, 45, 87, 88, 98, 97};  // This is an array of marks.
     cout<<"Getting the value of the array : "<<endl;
     cout<<marks[0]<<endl; // Here number within the sq. brackets are the indexes of the array
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;
     cout<<marks[4]<<endl;
     cout<<marks[5]<<endl;
     // or if we want to get all the marks in one go then,
     for (int i = 0; i < 6; i++) // In the condition if we will give the wrong number of index or greater number than the toatal length of the array then it will return the garbage value.
     {
         cout<<"The value at index "<< i <<" of marks is : "<<marks[i]<<endl;
     }
     
     cout<<"Pointers : "<<endl;
     int *p = marks;  // Here, we will not use the " & " ampersand sign because it treats the variable and the array differentely.
     cout<<*(p++)<<endl;
     cout<<*(++p)<<endl;
     cout<<"The value of *p is : "<< *p <<endl;
     cout<<"The value of *( p + 1 )is : "<< *( p + 1 )<<endl;
     cout<<"The value of *( p + 2 )is : "<< *( p + 2 )<<endl;
     cout<<"The value of *( p + 3 ) is : "<<*( p + 3 ) <<endl;
     return 0;
}

