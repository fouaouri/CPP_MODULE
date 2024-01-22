#include "BitcoinExchange.hpp"

void   parse_value(std::string val, float *value){
    std::string val2;

    if(val[val.length() - 1] == ' '){
        std::cout << "Invalide input .. there is a spaces after the bitcoin value !";
        exit(0);
    }
    std::istringstream iss(val);
    while(std::getline(iss, val2, '\0'))
        *value = std::atof(val2.c_str());
}

void fill_the_map(std::ifstream *csvfile, std::multimap<std::string, float>*csv){
    std::string line;
    std::string date;
    std::string val;
    float value;

    while (std::getline(*csvfile, line))
    {
        std::istringstream iss(line);
        if (std::getline(iss, date, ','))
        {
            if (std::getline(iss, val))
            {
                value = std::atof(val.c_str());
                csv->insert(std::make_pair(date, value));
            }
        }
    }
    // for(std::map<std::string, float>::iterator it = csv->begin(); it != csv->end(); ++it)
    //     std::cout << it->first << " = " << it->second << std::endl;
}
void parce_input(std::ifstream *infile, std::multimap<std::string, float>*csv){
    std::string line;
    std::string date;
    std::string val;
    float mul = 0.00;
    float value = 0.00;
    float value1 = 0.00;

    while (std::getline(*infile, line))
    {
        int flag = 0;
        std::istringstream iss(line);
        if (std::getline(iss, date, '|'))
        {
            if (std::getline(iss, val))
            {
                parse_value(val, &value);
                if(value <= 1000.00 && value >= 0)
                {
                    value1 = value;
                }
                else if(value > 1000.00)
                {
                    std::cout << "Error: too large a number." << std::endl;
                    flag += 1;
                }
                else if(value < 0)
                {
                    std::cout << "Error: not a positive number." << std::endl;
                    flag += 1;
                }
            }
            else
            {
                std::cout << "Error: bad input => " << date << std::endl;
                flag += 1;
            }
        }
        for(std::map<std::string, float>::iterator it = csv->begin(); it != csv->end(); it++)
        {
            // std::map<std::string, float>::iterator previt = it;
            if(it->first == date)
            {
                mul = it->second;
                break;
            }
            else
            {
                // previt--;
                std::cout << "not found" << std:: endl;
                break;
            }
            std::cout << it->first << " = " << it->second << std::endl;
        }
        // std::cout << mul << std::endl;
        if(flag == 0)
            std::cout << date << " => " << value1 << " = " << value1 * mul << std::endl;
    }
}



int main(int ac, char **av){
    (void)ac;
    (void)av;
    if(ac == 2)
    {
        std::ifstream infile(av[1]);
        std::ifstream csvfile("data.csv");
        std::multimap<std::string, float>csv;
        if(csvfile.is_open())
            fill_the_map(&csvfile, &csv);
        if(infile.is_open())
            parce_input(&infile, &csv);
        // fix_output(csv,)
    }
    else
        std::cout << "Invalid input .. the number of arguments must be one which is the name of file ." << std::endl;
}