#include<iostream>
using namespace std;

 int main(){ 
     enum meal{breakfast, lunch, dinner};
     meal M1 = lunch;
     cout<<( M1 == 1)<<endl;  // It will return " 1 " for " True " or " 0 " for " False ".
     cout<<( M1 == 2)<<endl;

     cout<<breakfast<<endl;  // It will return the index of the enum.
     cout<<lunch<<endl;
     cout<<dinner<<endl;
     return 0;
}
