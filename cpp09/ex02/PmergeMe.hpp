#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <cstdlib>
#include <utility>
#include <algorithm>
#include <ctime>
#include <sys/time.h>

static clock_t currentTime;
static clock_t currentTime1;


void    fill_containers(std::deque<int>*dequue, std::vector<int>*vectoor, int ac, char **av);
int     parse_args(int ac, char **av);
int     num_of_args(int ac);
void    error(std::string str);
void    show_the_arguments(std::vector<int>*vectoor);
void    D_MergeInsertion(std::deque<int>*dequue);
void    V_MergeInsertion(std::vector<int>*vectoor);
void    print_vector(std::vector<int> *firsts);
void    count_time(std::string str);
