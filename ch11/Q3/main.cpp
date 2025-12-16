#include <iostream>
#include <iomanip>
#include "RainbowColor.h"
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using RC::RainbowColor;
int main(){
    RainbowColor default_color;
    cout<<"Testing Default Constructor"<<endl;
    cout<<"Code: "<<default_color.color_output_int()<<endl;
    cout<<"Color name: "<<default_color.color_output_name()<<endl;

    RainbowColor integer_color(3);
    cout<<"Testing Interger Constructor"<<endl;
    cout<<"Code: "<<integer_color.color_output_int()<<endl;
    cout<<"Color name: "<<integer_color.color_output_name()<<endl;

    RainbowColor char_color('I');
    cout<<"Testing Character Constructor"<<endl;
    cout<<"Code: "<<char_color.color_output_int()<<endl;
    cout<<"Color name: "<<char_color.color_output_name()<<endl;

    RainbowColor input_color;
    int input_index;
    cout<<"Enter a color index(0-6): ";
    cin>>input_index;
    input_color.color_input(input_index);
    cout<<"Code: "<<input_color.color_output_int()<<endl;
    cout<<"Color Name: "<<input_color.color_output_name()<<endl;

    //next
    char input_char;
    cout<<"Testing getNextColor member function"<<endl;
    cin>>input_char;
    RainbowColor input_char_color(input_char);
    cout<<"Current     Next"<<endl;
    cout<<input_char_color.color_output_int()<<setw(17)<<input_char_color.color_output_name()<<endl;
    RainbowColor nextColor = input_char_color.getNextColor();
    cout<<nextColor.color_output_int()<<setw(17)<<nextColor.color_output_name()<<endl;
}