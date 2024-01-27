#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <cstring>

void    check_value(std::string val);
void   parse_value(std::string val, float *value);
void parce_input(std::ifstream *infile, std::multimap<std::string, float>*csv);
void fill_the_map(std::ifstream *csvfile, std::multimap<std::string, float>*csv);