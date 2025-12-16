#include <iostream>
using namespace std;

int main(){
    float height, weight, age;
    float hat, jacket, waist;
    char repeat='y';
    while(1){
        if(repeat=='y' || repeat=='Y'){
            int addition_inch=0;
            cout<<"Give height, weight and age respectively."<<endl;
            cout<<"Your hat, jacket and waist size will be given"<<endl;
            cin>>height>>weight>>age;

            hat=(weight/height)*2.9;

            if(age>=40){
                addition_inch=(1.0/8.0)*((age-30)/10);
            }
            jacket=(height*weight)/288+addition_inch;

            if(age>=30){
                addition_inch=(1.0/10.0)*((age-28)/2);
            }
            waist=weight/5.7+addition_inch;

            cout<<"Hat size: "<<hat<<endl;
            cout<<"jacket size: "<<jacket<<endl;
            cout<<"Waist size: "<<waist<<endl;

            cout<<"enter 'Y' or 'y' to repeat this calculation, other will end"<<endl;
            cin>>repeat;
        }else{
            break;
        }
    }
}