#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
class Temperature{
    private:
        double temp_inK,temp_inC,temp_inF;
    public:
        Temperature(){
            temp_inF=0;
        }
        Temperature(int cons_temp){
            temp_inF=cons_temp;
        }
        void calculate(){
            temp_inC=(temp_inF-32.0)*(5.0/9.0);
            temp_inK=temp_inC+273.15;
        }
        friend istream& operator >>(istream& input,Temperature &input_temp){
            double temp_value;
            input>>temp_value;
            input_temp.temp_inF=temp_value;
            return input;
        }
        friend ostream& operator <<(ostream& output, const Temperature& output_temp){
            output<<"In Kelvin: "<<output_temp.temp_inK<<endl;
            output<<"In Celsius: "<<output_temp.temp_inC<<endl;
            output<<"In Fahrenheit: "<<output_temp.temp_inF<<endl;
            return output;
        }
        bool operator ==(const Temperature& others) const{
            return temp_inF==others.temp_inF;
        }
};

int main(){
    Temperature t1,t2;
    cout<<"Input a temprature 1 in fahrenheit: ";
    cin>>t1;
    t1.calculate();
    cout<<t1;

    cout<<"Input a temprature 2 in fahrenheit: ";
    cin>>t2;
    t2.calculate();
    cout<<t2;

    if(t1==t2){
        cout<<"Temprature 1 == Temprature 2: true"<<endl;
    }else{
        cout<<"Temprature 1 == Temprature 2: false"<<endl;
    }
}