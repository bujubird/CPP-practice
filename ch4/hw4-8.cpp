#include <iostream>
using namespace std;

const double kilo_to_pounds = 2.2046;
const double pounds_to_ounces = 16;
const double kilo_to_gram = 1000;
void input_weight_and_height(double &kilograms, double &grams){
    cout<<"Input weight<kg>: ";
    cin>>kilograms;
    cout<<"Input weight<g>: ";
    cin>>grams;
}
double calculate_kilo(double &kilograms, double &grams){
    double gramsInkilogram=grams/kilo_to_gram;
    double Totalkilo=kilograms+gramsInkilogram;
    return Totalkilo;
}
void Calculate_to_pounds(double Totalkilo,int &pounds,double &ounces){
    pounds=Totalkilo*kilo_to_pounds;
    ounces=(Totalkilo*kilo_to_pounds-pounds)*pounds_to_ounces;
}
void output_weight_and_height(int &pounds,double &ounces){
    cout<<"Weight: "<<pounds<<" pounds and "<<ounces<<" ounces"<<endl;
}
int main(){
    int pounds;
    double ounces;
    double TotalKilogram;
    double kilogram;
    double gram;
    char keepgoing='y';
    while(1){
        if(keepgoing=='n'){
            break;
        }else if(keepgoing=='y'){
            input_weight_and_height(kilogram,gram);
            TotalKilogram=calculate_kilo(kilogram,gram);
            Calculate_to_pounds(TotalKilogram,pounds,ounces);
            output_weight_and_height(pounds,ounces);
        }
        cout<<"Continue?[y/n]: ";
        cin>>keepgoing;
    }
}