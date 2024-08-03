#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>

struct Data {
    int number;
    std::string text;
};

class Serializer {
public:

    static uintptr_t serialize(Data* ptr);

    static Data* deserialize(uintptr_t raw);

    Serializer();
    Serializer(const Serializer& other);
    Serializer& operator=(const Serializer& other);
    ~Serializer();
};

#endif // SERIALIZER_HPP
