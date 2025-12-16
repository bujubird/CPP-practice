#include <iostream>
using namespace std;

const double kilo_to_pounds = 2.2046;
const double pounds_to_ounces = 16;
const double kilo_to_gram = 1000;
void input_weight_and_height(double &pounds, double &ounces){
    cout<<"Input pounds: ";
    cin>>pounds;
    cout<<"Input ounces: ";
    cin>>ounces;
}
double calculate_InPounds(double &pounds, double &ounces){
    double ouncesInPounds=ounces/pounds_to_ounces;
    double TotalPounds=pounds+ouncesInPounds;
    return TotalPounds;
}
void Calculate_to_grams(double TotalPounds,int &kilogram,double &grams){
    kilogram=TotalPounds/kilo_to_pounds;
    grams=(TotalPounds/kilo_to_pounds-kilogram)*kilo_to_gram;
}
void output_weight_and_height(int &kilogram,double &grams){
    cout<<"Weight: "<<kilogram<<" kg and "<<grams<<" g"<<endl;
}
int main(){
    double pounds,ounces;
    double TotalPounds;
    int kilogram;
    double gram;
    char keepgoing='y';
    while(1){
        if(keepgoing=='n'){
            break;
        }else if(keepgoing=='y'){
            input_weight_and_height(pounds,ounces);
            TotalPounds=calculate_InPounds(pounds,ounces);
            Calculate_to_grams(TotalPounds,kilogram,gram);
            output_weight_and_height(kilogram,gram);
        }
        cout<<"Continue?[y/n]: ";
        cin>>keepgoing;
    }
}