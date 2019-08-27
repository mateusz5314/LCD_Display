#pragma once

#include "numbers.hpp"
#include "iostream"

class lcd: protected numbers 
{
    private:
    std::string string_buff;
    std::string digital_container{"10081997"};
        void show_line(std::vector<char> num_board);
        void get_number();
        void number_refactor(std::vector<char>digital_cont, unsigned long number);
        void show();
    public:
        void lcd_maker();
        
};