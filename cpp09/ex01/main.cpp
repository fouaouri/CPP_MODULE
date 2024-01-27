#include <iostream>
#include <fstream>
#include <stack>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <iomanip>

int valid_input(std::string arg)
{
    int count = 0;
    for(int i = 0; i < (int)arg.length(); i++)
    {
        if(arg[i] == '.')
            count += 1;
    }
    if(count > 1)
        return(0);
    return(1);
}

int check_oper(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return(0);
    return(1);
}

float    operation(std::stack<float>&number, char c)
{
    float nb1 = number.top();
    number.pop();
    float nb2 = number.top();
    number.pop();
    if(c == '+')
        return(nb2 + nb1);
    else if(c == '-')
        return(nb2 - nb1);
    else if(c == '*')
        return(nb2 * nb1);
    else if(c == '/')
    {
        if( nb1 == 0)
        {
            std::cout << "error division by zero" << std::endl;
            exit(1);
        }
        return(nb2 / nb1);
    }
    return(0);
}

int main(int ac, char **av){
    if(ac == 2)
    {
        std::stack<float>number;
        valid_input(av[1]);
        std::string arg = av[1];
        for(int i = 0; i <= (int)arg.length() - 1; i++)
        {
            if(check_oper(arg[i]) && !isspace(arg[i]) && !isdigit(arg[i]))
            {
                std::cout << "Error" << std::endl;
                exit(1);
            }
            if(isspace(arg[i]))
                i++;
            if(isdigit(arg[i]))
                number.push(arg[i] - 48);
            else if(!check_oper(arg[i]))
            {
                if(number.size() <= 1)
                {
                    std::cout << "error :less than 2 numbers " << std::endl;
                    exit(1);
                }
                number.push(operation(number, arg[i]));
            }
        }
        if(number.size() == 1)
        {
            std::cout << "Result : " << number.top() << std::endl;
        }
        else
        {
            std::cout << "error : more than 1 number  " << std::endl;
            exit(1);
        }
    }
    else
        std::cout << "Invalid input : check the number of arguments ." << std::endl;
}