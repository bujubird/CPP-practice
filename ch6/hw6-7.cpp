#include <iostream>
#include <string>
using namespace std;
class Pizza{
    private:
        string type_of_pizza;
        int toppings1,toppings2;
        string size;
    public:
        void setPizza(string set_type,int set_toppings1,int set_toppings2,string set_size){
            toppings1=set_toppings1;
            toppings2=set_toppings2;
            type_of_pizza=set_type;
            size=set_size;
        }
        string getType(){
            return type_of_pizza;
        }
        int getToppings1(){
            return toppings1;
        }
        int getToppings2(){
            return toppings2;
        }
        string getSize(){
            return size;
        }
        void outputDescription(){
            cout<<"The pizza is "<<size<<", "<<type_of_pizza<<", with "<<toppings1<<" pepperoni toppings and "<<toppings2<<" cheese toppings."<<endl;
            cout<<"Price of pizza: "<<computePrice()<<endl;;
        }
        int computePrice(){
            if(size=="small"){
                return 10+2*(toppings1+toppings2);
            }else if(size=="medium"){
                return 14+2*(toppings1+toppings2);
            }else if(size=="large"){
                return 17+2*(toppings1+toppings2);
            }else{
                return -1;
            }
        }
};

int main(){
    Pizza pizza1,pizza2;
    pizza1.setPizza("handtossed",0,3,"small");
    pizza2.setPizza("PAN",2,1,"large");
    pizza1.outputDescription();
    pizza2.outputDescription();
    Pizza pizza3;
}