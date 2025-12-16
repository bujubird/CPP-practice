#include <iostream>
#include <string>
using namespace std;

class Weight{
    private:
        double kilograms,pounds,ounces;
    public:
        void setWeightPounds(double set_pounds){
            kilograms=set_pounds/2.21;
            pounds=set_pounds;
            ounces=pounds*16;
        }
        void setWeightKilograms(double set_kilogram){
            kilograms=set_kilogram;
            pounds=set_kilogram*2.21;
            ounces=pounds*16;
        }
        void setWeightOunces(double set_ounces){
            kilograms=(set_ounces/16)/2.21;
            pounds=set_ounces/16;
            ounces=set_ounces;
        }
        void outputResult_kilo(){
            cout<<"Set Kilogram in "<<kilograms<<endl;
            cout<<"Kilo: "<<kilograms<<endl;
            cout<<"Pound: "<<pounds<<endl;
            cout<<"Ounce: "<<ounces<<endl;
            cout<<endl;
        }
        void outputResult_pound(){
            cout<<"Set Pound in "<<pounds<<endl;
            cout<<"Kilo: "<<kilograms<<endl;
            cout<<"Pound: "<<pounds<<endl;
            cout<<"Ounce: "<<ounces<<endl;
            cout<<endl;
        }
        void outputResult_ounce(){
            cout<<"Set Ounce in "<<ounces<<endl;
            cout<<"Kilo: "<<kilograms<<endl;
            cout<<"Pound: "<<pounds<<endl;
            cout<<"Ounce: "<<ounces<<endl;
            cout<<endl;
        }
};
int main(){
    Weight w1,w2,w3;
    w1.setWeightKilograms(60);
    w2.setWeightPounds(110);
    w3.setWeightOunces(1800);
    w1.outputResult_kilo();
    w2.outputResult_pound();
    w3.outputResult_ounce();
}