#include<iostream>
using namespace std;

class shop{
    int num;
    int itemID[3];
    int itemPrice[3];
    public:
    void total_number_of_item(){
       num = 0;
    }
    void set_price(void);
    void display_price(void);
};

void shop :: set_price(void){

        cout<<"Enter ID of your item number "<<num + 1<<" ";
        cin>>itemID[num];
        
        cout<<"Enter Price of your item ";
        cin>>itemPrice[num];
        num++;
    
}

void shop::display_price(){
    for (int i = 0; i < num; i++)
    {
        cout<<"The price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

 int main(){ 

     shop item;
     item.total_number_of_item();
     item.set_price();
     item.set_price();
     item.set_price();
     item.display_price();

     return 0;
}
