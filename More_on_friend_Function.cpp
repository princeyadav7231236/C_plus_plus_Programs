#include<iostream>
using namespace std;

class Y;
class X{
    int data1;
    public:
    void setData(int value1){
        data1 = value1;
    }
    friend void add(X, Y);
};

class Y{
    int data2;
    public:
    void setData2(int value2){
        data2 = value2;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"The sum of X and Y data is : "<<(o1.data1 + o2.data2)<<endl;
}
 int main(){ 
     
     X obj1;
     obj1.setData(45);

     Y obj2;
     obj2.setData2(55);
     
     add(obj1, obj2);

     return 0;
}
