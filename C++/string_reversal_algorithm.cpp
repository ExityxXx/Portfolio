#include <iostream>
// SRA - String Reversal Alghoritm
// The algorithm uses a loop and index notation to reverse the elements of an array.

// The function returns std::string — a copy of the reversed string.
// The function takes one argument of type std::string - the original input string
std::string reversed_string(std::string original)
{
    char temp;
    int i, j;

    for (i = 0, j = original.size() - 1; i < j; ++i, --j)
    {
        temp = original[j];
        original[j] = original[i];
        original[i] = temp;
    }

    return original;
};

// The main() function has a simple interactive interface for easy use of the program.
int main(void)
{
    std::cout << "Enter the string for reverse this string...\n";
    
  
    while (true)
    {
        std::cout << "Enter: ";
        std::string input;
        std::getline(std::cin, input);

        std::cout << "Result: " << reversed_string(input) << std::endl;
    }
    return 0;
}
