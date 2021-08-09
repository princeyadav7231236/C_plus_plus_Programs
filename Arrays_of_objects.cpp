#include<iostream>
using namespace std;

class Employee{
    int ID;
    public:
    void setdata(){
        cout<<"Enter the ID of the Employee : ";
        cin>> ID;
    }

    void getdata(){
        cout<<"The ID of the Employee is : "<<ID<<endl;
    }
};

 int main(){ 
     Employee Harry;
     Harry.setdata();
     Harry.getdata();

     Employee fd[3];
     for (int i = 0; i < 3; i++)
     {
         fd[i].setdata();
         fd[i].getdata();
     }
    
     return 0;
}
