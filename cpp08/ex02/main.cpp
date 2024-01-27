#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(20);
    std::cout << "top : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "top after pop : " << mstack.top() << std::endl;
    std::cout << "********************" << std::endl;
    std::cout << "size : "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    std::cout << "size : "<< mstack.size() << std::endl;
    mstack.push(0);
    std::cout << "size : "<< mstack.size() << std::endl;
    std::cout << "********************" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "mstack : " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "********************" << std::endl;
    std::cout << "s.size  : " << s.size() << std::endl;
    std::cout << "********************" << std::endl;
    while (!s.empty())
    {
        std::cout << "s : " << s.top() << std::endl;
        s.pop();
    }
    return 0;
}