#include <iostream>
#include <ctype.h>
int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                   av[i][j] = toupper(av[i][j]);
            }
            std::cout << av[i] << " ";
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}