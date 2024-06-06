#ifndef BRAIN
 #define BRAIN

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain& cpy);
    Brain& operator=(const Brain& other);

    std::string getIdeas() const;
    void setIdeas(std::string idea);

};


 #endif // BRAIN