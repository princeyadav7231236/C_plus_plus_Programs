#include<iostream>
using namespace std;

struct Employeee
{
    string name;
    float salary;
    string role;
};

 int main(){ 
     // Here for storing the value of a char type you need to put in a single quoted string otherwise it will give an error.
     Employeee Diwakar;
     Diwakar.name = "Diwakar";
     Diwakar.role = "Programmer";
     Diwakar.salary = 100000000000;
     cout<<"The name of Employee is : "<<Diwakar.name<<endl;
     cout<<"The salary of Diwakar is : "<<Diwakar.salary<<endl;
     cout<<"The role of Diwakar is : "<<Diwakar.role<<endl;

     return 0;
}
