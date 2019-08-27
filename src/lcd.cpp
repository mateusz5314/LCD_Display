#include "lcd.hpp"
#include <algorithm>
#include <string>
#include <unistd.h>
unsigned int magic = 0;

void lcd::lcd_maker()
{
    system("clear");
    while(true)
    {
    string_buff = std::to_string(magic);
    swap(string_buff, digital_container);
    show();
    magic--;
    usleep(500*1000);
    system("clear");
    }

}
void lcd::show()
{
    for(unsigned int line=0; line<one.size(); line++)
    {
        for(unsigned int digit=0; digit<digital_container.size(); digit++)
        {
            switch(digital_container[digit])
            {
            case '1':
                show_line(*(one.begin()+line));
            break;
            case '2':
                show_line(*(two.begin()+line));
            break;
            case '3':
                show_line(*(three.begin()+line));
            break;
            case '4':
                show_line(*(four.begin()+line));
            break;
            case '5':
                show_line(*(five.begin()+line));
            break;
            case '6':
                show_line(*(six.begin()+line));
            break;
            case '7':
                show_line(*(seven.begin()+line));
            break;
            case '8':
                show_line(*(eight.begin()+line));
            break;
            case '9':
                 show_line(*(nine.begin()+line));
            break;
            case '0':
                show_line(*(zero.begin()+line));
            break;
            default:
                std::cout<< "  ";
            break;
            }
        }
        std::cout<<"\n";
    }
}
void lcd::show_line(std::vector<char> num_board)
{
    for (auto i : num_board)
    {
        std::cout << i;
    }
}

void lcd::get_number()
{
    std::string num;
    std::cout << "Enter a number to make a magic:\n";
    std::cin >> num;
    swap(num, digital_container);
}

