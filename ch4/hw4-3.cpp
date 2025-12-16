#include <iostream>
#include <cmath>
#include <time.h>
#include <cstring>

using namespace std;
void VoucherOfBakery(int itemCode,int &voucherValue);
int main(){
    int vouchervalue,itemcode;
    cout<<"Bagel: 10"<<endl<<"Cake: 20"<<endl<<"Croissant: 30"<<endl<<"Toast: 40"<<endl;
    cout<<"Input your value of voucher: ";
    cin>>vouchervalue;
    while(vouchervalue>=10){
        cout<<"Which item you want: ";
        cin>>itemcode;
        VoucherOfBakery(itemcode,vouchervalue);
    }
}
void VoucherOfBakery(int itemCode,int &voucherValue){
    int price;
    switch(itemCode){
        case 1:
            price=10;
            break;
        case 2:
            price=20;
            break;
        case 3:
            price=30;
            break;
        case 4:
            price=40;
            break;
    }
    if(voucherValue>=price){
        voucherValue-=price;
        if(voucherValue==0){
            cout<<"Your value of voucher is 0, Terminated"<<endl;
        }else{
            cout<<"You still have "<<voucherValue<<endl;
        }
    }else{
        cout<<"You don't have enough voucher to buy it, pick another one."<<endl;
    }
   
}
