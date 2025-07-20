#include <iostream>

int main(void)
{
    std::cout << "-| Calculator |-\nEnter first value: ";
    int first_value;
    std::cin >> first_value;

    std::cout << "Enter operator: ";
    char ch;
    std::cin >> ch;

    std::cout << "Enter second value: ";
    int second_value;
    std::cin >> second_value;

    
    switch (ch)
    {
        case '+':
            std::cout << "Result: " << first_value + second_value << std::endl;
            break;
        case '-':
            std::cout << "Result: " << first_value - second_value << std::endl;
            break;
        case '*':
            std::cout << "Result: " << first_value * second_value << std::endl;
            break;
        case '/':
            std::cout << "Result: " << first_value / second_value << std::endl;
            break;
        default:
            std::cout << "Undefined ariphmetic operator: '" << ch << "'.\n";
            break;
    }

    std::cout << "Bye!\n";
    return 0;
} 
