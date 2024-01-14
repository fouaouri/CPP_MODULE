
#pragma once
#include <iostream>
#include <stdint.h>

struct Data
{
    std::string str1;
    std::string str2;
};

class  Serializer{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};