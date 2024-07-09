#include "Harl.hpp"
int main(int ac, char **av)
{
    Harl bot;
    if (ac == 2)
    {
        bot.complain(av[1]);
    }
    else
    {
        std::cout << "instructions unclear, self-detonation in: 10" << std::endl;
        for (int i = 9; i > 0; --i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Countdown: " << i << std::endl;
    }
    }
    
    return 0;
}