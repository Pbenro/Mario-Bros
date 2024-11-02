#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    int g = -5;
    int h = 0;
    while (true){
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

        auto can = Canvas(300,50);
        can.DrawPointCircle(10, 40, 4);
        can.DrawPointLine(15, 38, 28, 33);
        can.DrawPointLine(28, 33, 28, 28);
        can.DrawPointLine(28, 28, 10, 30);
        can.DrawPointLine(10, 30, 4, 33);
        can.DrawPointLine(4, 33, 6, 36);
        can.DrawPointCircleFilled((30+(1.42*frame)), (29 + (.1*g*frame)-h), 2);

        Element lienzo = bgcolor(Color::Yellow3, canvas(&can));
        Render(pantalla, lienzo);

        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);

        this_thread::sleep_for(0.1s);
        frame++;

        if (frame==40){
            h = -1;
        }

        if (frame>40){
            h = h -1;
        }

        if(frame == 175){
            frame = 0;
            reset_position = pantalla.ResetPosition(true);
        }
    }
    return 0;
}