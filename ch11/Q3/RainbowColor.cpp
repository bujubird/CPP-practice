#include "RainbowColor.h"
#include <iostream>
using namespace std;
namespace RC{
    int n_color;
    RainbowColor::RainbowColor(){
        n_color=0;
    }
    RainbowColor::RainbowColor(int index){
        n_color=index;
    }
    RainbowColor::RainbowColor(char letter){
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
    void RainbowColor::color_input(int input_index){
        n_color=input_index;
    }
    int RainbowColor::color_output_int(){
        return n_color;
    }
    string RainbowColor::color_output_name(){
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
    RainbowColor RainbowColor::getNextColor(){
        int next_index = (n_color+1)%7;
        return RainbowColor(next_index);
    }
}