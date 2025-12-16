#include <iostream>
#include <cmath>
using namespace std;

const double kilo_to_pounds = 2.2046;
const double pounds_to_ounces = 16;
const double kilo_to_gram = 1000;
void inputWeight_pounds(double &input1,double &input2){
    cout<<"Input pounds: ";
    cin>>input1;
    cout<<"Input ounces: ";
    cin>>input2;
}
void inputWeight_gram(double &input1, double &input2){
    cout<<"Input weight<kg>: ";
    cin>>input1;
    cout<<"Input weight<g>: ";
    cin>>input2;
}
double TotalKilogram(double kilograms, double grams){
    double total_kilograms=(kilograms*kilo_to_gram+grams)/kilo_to_gram;
    return total_kilograms;
}
double TotalPounds(double pounds, double ounces){
    double total_pounds=(pounds*pounds_to_ounces+ounces)/pounds_to_ounces;
    return total_pounds;
}
void Calculate_kilo_to_pounds(double total_kilograms,double &pounds,double &ounces){
    double remaining=(total_kilograms*kilo_to_pounds)-((floor)(total_kilograms*kilo_to_pounds));
    pounds=(floor)(total_kilograms*kilo_to_pounds);
    ounces=remaining*pounds_to_ounces;
}
void Calculate_pounds_to_kilo(double total_pounds,double &kilograms, double &grams){
    double remaining=(total_pounds/kilo_to_pounds)-((floor)(total_pounds/kilo_to_pounds));
    kilograms=(floor)(total_pounds/kilo_to_pounds);
    grams=remaining*kilo_to_gram;
}
void outputWeight_gram(double &output1, double &output2){
    cout<<"Weight: "<<output1<<" kg and "<<output2<<" g"<<endl;
}
void outputWeight_pounds(double &output1, double &output2){
    cout<<"Weight: "<<output1<<" pounds and "<<output2<<" ounces"<<endl;
}
int main(){
    int choice;
    char keepgoing='y';
    double pounds,ounces,kilograms,grams;
    double total_pounds,total_kilograms;
    while(1){
        if(keepgoing=='y'){
            cout<<"If you want to convert pounds and ounces to kg and gram, enter 1"<<endl;
            cout<<"If you want to do it in reverse, enter 2"<<endl;
            cin>>choice;
            if(choice==1){
                inputWeight_pounds(pounds,ounces);
                total_pounds=TotalPounds(pounds,ounces);
                Calculate_pounds_to_kilo(total_pounds,kilograms,grams);
                outputWeight_gram(kilograms,grams);
            }else if(choice==2){
                inputWeight_gram(kilograms,grams);
                total_kilograms=TotalKilogram(kilograms,grams);
                Calculate_kilo_to_pounds(total_kilograms,pounds,ounces);
                outputWeight_pounds(pounds,ounces);

            }
        }else if(keepgoing=='n'){
            break;
        }
        cout<<"Continue?[y/n]: ";
        cin>>keepgoing;
    }
}