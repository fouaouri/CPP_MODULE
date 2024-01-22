#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstdlib>
// typedef struct btc{
//     std::string *date;
//     std::string *value;
//     int vl;
//     int year;
//     int month;
//     int day;
// }t_btc;

class Bitcoin{
    public:
        std::string date;
        int value;
};

void parce_input(std::ifstream *infile, std::map<std::string, int>file);
void fill_the_map(std::ifstream *csvfile, std::map<std::string, int>csv);
// void    parce_input(ifstream *infile);