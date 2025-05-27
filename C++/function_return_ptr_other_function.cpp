#include <iostream>
#include <vector>
#include <string>

std::string get_jamal() { return "Jamal"; }
std::string get_alex() { return "Alex"; }
std::string get_ivan() { return "Ivan"; }

std::string (*select(unsigned index))()
{
    std::string (*functions[])() = {get_jamal, get_alex, get_ivan};

    if (index > 0 && index < 4)
    {
        return *(functions + index - 1);
    }
    else
    {
        return nullptr;
    }
}
int main()
{
    std::string (*action)() = select(1);
    std::cout << action() << std::endl;

    action = select(2);
    std::cout << action() << std::endl;

    action = select(3);
    std::cout << action() << std::endl;

    return 0;
}
