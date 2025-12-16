#include <iostream>
#include <iomanip>
using namespace std;
#define RED 0
#define ORANGE 1
#define YELLOW 2
#define GREEN 3
#define BLUE 4
#define INDIGO 5
#define VIOLET 6
class RainbowColor{
    private:
        int n_color;
    public:
        RainbowColor(){
            n_color=0;
        }
        RainbowColor(int index){
            n_color=index;
        }
        RainbowColor(char letter){
            switch(letter){
                case 'R':
                    n_color=RED;
                    break;
                case 'O':
                    n_color=ORANGE;
                    break;
                case 'Y':
                    n_color=YELLOW;
                    break;
                case 'G':
                    n_color=GREEN;
                    break;
                case 'B':
                    n_color=BLUE;
                    break;
                case 'I':
                    n_color=INDIGO;
                    break;
                case 'V':
                    n_color=VIOLET;
                    break;
            }
        }
        void color_input(int input_index){
            n_color=input_index;
        }
        int color_output_int(){
            return n_color;
        }
        string color_output_name(){
            switch(n_color){
                case 0:
                    return "RED";
                    break;
                case 1:
                    return "ORANGE";
                    break;
                case 2:
                    return "YELLOW";
                    break;
                case 3:
                    return "GREEN";
                    break;
                case 4:
                    return "BLUE";
                    break;
                case 5:
                    return "INDIGO";
                    break;
                case 6:
                    return "VIOLET";
                    break;
            }
        }
        RainbowColor getNextColor()const{
            int next_index = (n_color+1)%7;
            return RainbowColor(next_index);
        }
};

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