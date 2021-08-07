#include<iostream>
using namespace std;

 int main(){ 
     int age;
     cout<<"Enter your age : ";
     cin>>age;

     cout<<"if, else if and else control statements :- "<<endl;
     if (age>18 && age <= 150){
         cout<<"You are eligible to cast your vote.";
     }
     else if (age==18)
     {
         cout<<"You're not yet eligible to cast your vote.";
     }
     else if (age < 1)
     {
         cout<<"You're not yet born.";
     }
     else if(age > 150){
         cout<<"You're too old. or you are dead, please confirm your identity that you are alive.";
     }
     else{
         cout<<"You're a kid.";
     }

     cout<<"\nSelection control structure, Switch case Statements :-\n";
     switch (age)
     {
     case 18:
        cout<<"You're mature now\n";
         break;
     
     case 50:
        cout<<"You're a men or beautiful women.\n";
         break;
     
     case 1:
        cout<<"You're a kid.\n";
         break;
     
     default:
         cout<<"No, other cases.\n";
         break;
     }

     return 0;
}
