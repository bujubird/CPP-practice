#include <iostream>
using namespace std;
void productStock(vector<int> &product_amount,int buy_amount,string product){
    if(product=="Chocolate"){
        if(product_amount[0]>=buy_amount){
            product_amount[0]-=buy_amount;
        }else{
            cout<<"Out of Stock,choose another"<<endl;
        }
    }else if(product=="Vanilla"){
        if(product_amount[1]>=buy_amount){
            product_amount[1]-=buy_amount;
        }else{
            cout<<"Out of Stock,choose another"<<endl;
        }
    }else if(product=="Strawberry"){
        if(product_amount[2]>=buy_amount){
            product_amount[2]-=buy_amount;
        }else{
            cout<<"Out of Stock,choose another"<<endl;
        }
    }else if(product=="Raspberry"){
        if(product_amount[3]>=buy_amount){
            product_amount[3]-=buy_amount;
        }else{
            cout<<"Out of Stock,choose another"<<endl;
        }
    }else if(product=="Butterscotch"){
        if(product_amount[4]>=buy_amount){
            product_amount[4]-=buy_amount;
        }else{
            cout<<"Out of Stock,choose another"<<endl;
        }
    }
}
int main(){
    cout<<"Code"<<"             "<<"Flavor"<<endl;
    cout<<"1"<<"                "<<"Chocolate"<<endl;
    cout<<"2"<<"                "<<"Vanilla"<<endl;
    cout<<"3"<<"                "<<"Strawberry"<<endl;
    cout<<"4"<<"                "<<"Raspberry"<<endl;
    cout<<"5"<<"                "<<"Butterscoth"<<endl;
    vector<int> product_amount={20,15,15,20,20};
    string product;
    int buy_amount;
    char choice='y';
    while(1){
        if(choice=='y' || choice=='Y'){
            cout<<"Product "<<"Stock"<<endl;
            for(int i=0;i<5;i++){
                cout<<i<<"        "<<product_amount[i]<<endl;
            }
            cout<<"Your order: ";
            cin>>product>>buy_amount;
            productStock(product_amount,buy_amount,product);
        }else if(choice=='n' || choice=='N'){
            break;
        }
        cout<<"Continue purchasing?[y/n]: ";
        cin>>choice;
    }

}