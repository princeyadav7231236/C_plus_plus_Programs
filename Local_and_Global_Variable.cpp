#include<iostream>
using namespace std;

int glo = 45;

void sum(){
    int a;
    cout<<glo;
}

 int main(){
   int glo = 55;
   glo = 85;  // This is changing the value of local variable i.e., glo=55 to glo=85
   sum();  // Calling sum function
   cout<<glo<<endl;
   cout<<::glo;  // Calling global variable glo with the help of Scope Resolution Operator ( :: )
   return 0;   
}
