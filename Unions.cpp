#include<iostream>
using namespace std;

union money{
    int rice;
    float doller;
    char carname;
};

 int main(){ 
     money m1;
     m1.carname = 'F';  // Here for storing the value of a char type you need to put in a single quoted string otherwise it will give an error.
     m1.doller = 2540.45;
     m1.rice = 7857415;
     // Union will give only one result other and if try to take the output of all the values it will return us the garbage value.
     cout<<"The value of doller is : "<<m1.doller<<endl;
     cout<<"The value of carname is : "<<m1.carname<<endl;
     cout<<"The value of rice is : "<<m1.rice<<endl;

     return 0;
}

