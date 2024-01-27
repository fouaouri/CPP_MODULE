#include "PmergeMe.hpp"

int    parse_args(int ac, char **av){
    for(int i = 1; i < ac; i++){
        for(int j = 0; j < av[i][j] != '\0'; j++)
        {
            if(!std::isdigit(av[i][j]))
                return(0);
        }
    }
    return(1);
}

int num_of_args(int ac)
{
    if(ac < 2)
        return(0);
    return(1);
}

void    error(std::string str){
    std::cout << "Error";
    if(!str.empty())
        std::cout << " : " << str;
    std::cout << std::endl;
    exit(1);
}

void    show_the_arguments(std::vector<int>*vectoor){
    for(std::vector<int>::iterator it = vectoor->begin(); it != vectoor->end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}


void    fill_containers(std::deque<int>*dequue, std::vector<int>*vectoor, int ac, char **av){
    for(int i = 1; i < ac; i++){
        vectoor->push_back(atoi(av[i]));
        dequue->push_back(atoi(av[i]));
    }
}

void    count_time(std::string str)
{
    clock_t EndTime = clock();
    clock_t StartTime = 0;
    if (str == "V")
        StartTime = currentTime;
    else if(str == "D")
        StartTime = currentTime1;
    double time1 = static_cast<double>(EndTime - StartTime) / CLOCKS_PER_SEC * 1000;
    std::cout << "Time to process a range of 5 elements with std::[..] : " << time1 << " s" << std::endl;
}

int main(int ac, char **av)
{
    std::vector<int>vectoor;
    std::deque<int>dequue;
    
    if(!parse_args(ac, av))
        error("There is a negative number or a non numerique .");
    if(!num_of_args(ac))
        error("u have to include at least one argument .");
    fill_containers(&dequue, &vectoor, ac, av);
    std::cout << "Before :  ";
    show_the_arguments(&vectoor);
    std::cout << "After  :  ";
    V_MergeInsertion(&vectoor);
    D_MergeInsertion(&dequue);
}