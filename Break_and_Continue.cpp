#include<iostream>
using namespace std;

 int main(){ 
     for (int i = 0; i < 100; i++)
     {
         if (i == 5){
             break;  // This will terinate the program when it will meet the sitution i.e., ( i == 5 ). 
         }
         else{
             cout<<i <<endl;
         }
     }
          
     for (int i = 0; i < 100; i++)
     {
         if (i == 5){
             continue;  // It will terminate the current value and then it will continue smoothely, i.e, when i will have the value of 5 it will just skip 5 and move on the next value 
         }
         else{
             cout<<i <<endl;
         }
     }

     return 0;
}
