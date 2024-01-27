#include "PmergeMe.hpp"

void    insert_seconds(std::vector<int> *firsts, std::vector<int> *seconds, int flag, int *b){
    for(int i = 0; i < (int)seconds->size(); i++)
        firsts->insert(std::upper_bound(firsts->begin(), firsts->end(), (*seconds)[i]), (*seconds)[i]);
    if(flag == 1)
        firsts->insert(std::upper_bound(firsts->begin(), firsts->end(), *b), *b);
    print_vector(firsts);
    count_time("V");
}

void    print_vector(std::vector<int> *firsts)
{
    for(std::vector<int>::iterator it = firsts->begin(); it != firsts->end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void    sort_pairs( std::vector<std::pair<int, int> > *pairs_v, int *b, int flag){
    std::vector<int>firsts;
    std::vector<int>seconds;

    int lenght = pairs_v->size();
    for(int i = 1; i < lenght ; i++)
    {
        std::pair<int, int> keyPair = (*pairs_v)[i];
        int j = i - 1;
        for(; j >= 0 && (*pairs_v)[j].first > keyPair.first; --j)
            std::swap((*pairs_v)[j + 1], (*pairs_v)[j]);
    }
    std::vector<std::pair<int, int> >::iterator it = pairs_v->begin();
    for(; it != pairs_v->end(); it++)
        firsts.push_back(it->first);
    it = pairs_v->begin();
    for(; it != pairs_v->end(); it++)
        seconds.push_back(it->second);
    insert_seconds(&firsts, &seconds, flag, b);
}

void    V_MergeInsertion(std::vector<int>*vectoor){

    std::pair<int, int> pairs;
    std::vector<std::pair<int, int> > pairs_v;
    std::vector<int>::iterator it = vectoor->begin();
    currentTime = clock();
    int b;
    int flag = 0;
    if(vectoor->size() % 2 == 1)
    {
        b = (*vectoor)[0];
        flag = 1;
        it += 1;
    }
    for(; it != vectoor->end(); it += 2)
        pairs_v.push_back(std::make_pair(*it, *(it + 1)));
    for(std::vector<std::pair<int, int> >::iterator it = pairs_v.begin(); it != pairs_v.end(); it++)
        if(it->first > it->second)
            std::swap(it->first, it->second);
    sort_pairs(&pairs_v, &b, flag);
}

//**************************************************************************************


void    insert_seconds(std::deque<int> *firsts, std::deque<int> *seconds, int flag, int *b){
    for(int i = 0; i < (int)seconds->size(); i++)
        firsts->insert(std::upper_bound(firsts->begin(), firsts->end(), (*seconds)[i]), (*seconds)[i]);
    if(flag == 1)
        firsts->insert(std::upper_bound(firsts->begin(), firsts->end(), *b), *b);
    count_time("D");
}

void    sort_pairs( std::deque<std::pair<int, int> > *pairs_v, int *b, int flag){
    std::deque<int>firsts; // is sorted .
    std::deque<int>seconds;

    int lenght = pairs_v->size();
    for(int i = 1; i < lenght ; i++)
    {
        std::pair<int, int> keyPair = (*pairs_v)[i];
        int j = i - 1;
        for(; j >= 0 && (*pairs_v)[j].first > keyPair.first; --j)
            std::swap((*pairs_v)[j + 1], (*pairs_v)[j]);
    }
    std::deque<std::pair<int, int> >::iterator it = pairs_v->begin();
    for(; it != pairs_v->end(); it++)
        firsts.push_back(it->first);
    it = pairs_v->begin();
    for(; it != pairs_v->end(); it++)
        seconds.push_back(it->second);
    insert_seconds(&firsts, &seconds, flag, b);
}

void    D_MergeInsertion(std::deque<int>*dequue){
    std::pair<int, int> pairs;
    std::deque<std::pair<int, int> > pairs_v;
    std::deque<int>::iterator it = dequue->begin();
    currentTime1 = clock();
    int b;
    int flag = 0;
    if(dequue->size() % 2 == 1)
    {
        b = (*dequue)[0];
        flag = 1;
        it += 1;
    }
    for(; it != dequue->end(); it += 2)
        pairs_v.push_back(std::make_pair(*it, *(it + 1)));
    for(std::deque<std::pair<int, int> >::iterator it = pairs_v.begin(); it != pairs_v.end(); it++)
        if(it->first > it->second)
            std::swap(it->first, it->second);
    sort_pairs(&pairs_v, &b, flag);
}