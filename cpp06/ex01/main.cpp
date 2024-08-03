#include "Serializer.hpp"

int main() {
    Data data;
    data.number = 42;
    data.text = "Hello, World!";

    uintptr_t serializedData = Serializer::serialize(&data);

    Data* deserializedData = Serializer::deserialize(serializedData);

    std::cout << "Original Data address: " << &data << std::endl;
    std::cout << "Deserialized Data address: " << deserializedData << std::endl;
    std::cout << "Serialized data: " << serializedData << std::endl;

    if (deserializedData == &data) {
        std::cout << "Success! The addresses match." << std::endl;
    } else {
        std::cout << "Failure! The addresses do not match." << std::endl;
    }

    return 0;
}
