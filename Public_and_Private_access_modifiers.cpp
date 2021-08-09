#include<iostream>
using namespace std;

class Employee{
    private:
    int a, b, c ;
    public:
    int d, e ;
    void setdata(int a1, int b1, int c1);
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

 int main(){ 
     
      Employee Diwakar;  // Diwakar is the Object of Class Employee.
      Diwakar.setdata(1, 2, 3);
      Diwakar.getdata();  // Since the value of " d " and " e " are not assigned it will give us the garbage value.
      Diwakar.d = 45;  // Since, these variables are Public then only we are able to change it from outside.
      Diwakar.e = 55;  // If the variable would we Private then if we will try to change it's value it will giove you an error,
     Diwakar.getdata();

     return 0;
}
