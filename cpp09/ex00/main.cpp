#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if(ac == 2)
    {
        std::ifstream infile(av[1]);
        std::ifstream csvfile("data.csv");
        std::multimap<std::string, float>csv;
        if(csvfile.is_open())
            fill_the_map(&csvfile, &csv);
        if(infile.is_open())
            parce_input(&infile, &csv);
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}