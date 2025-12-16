#ifndef RAINBOW_H
#define RAINBOW_H
#include <string>
using namespace std;
namespace RC{
    class RainbowColor{
        private:
            const int RED = 0;
            const int ORANGE = 1;
            const int YELLOW = 2;
            const int GREEN = 3;
            const int BLUE = 4;
            const int INDIGO = 5;
            const int VIOLET = 6;
            int n_color;
        public:
            RainbowColor();
            RainbowColor(int index);
            RainbowColor(char letter);
            void color_input(int input_index);
            int color_output_int();
            string color_output_name();
            RainbowColor getNextColor();
    };
}
#endif