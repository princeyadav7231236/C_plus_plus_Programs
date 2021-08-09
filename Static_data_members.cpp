#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;   // Here one copy of Count is shared among all the members of the class 
    public:
    void setdata(){
        cout<<"Enter the ID of the Employee : ";
        cin>>id;
    }

    void getdata(){
        cout<<"The ID of the Employee is : "<<id<<" which has the count number : "<<count<<endl;
    }

    void getcount(){
        cout<<"The value of count is : "<<count<<endl;
    }
};

int Employee :: count;

 int main(){ 

     Employee Harry, Rohan, Lovish;
     Harry.setdata();
     Harry.getdata();
     Harry.getcount();   //Each count will have the same value.
    
     Rohan.setdata();
     Rohan.getdata();
     Rohan.getcount();    //Each count will have the same value.

     Lovish.setdata();
     Lovish.getdata();
     Lovish.getcount();   //Each count will have the same value.

     return 0;
}
