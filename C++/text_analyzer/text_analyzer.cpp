
/*
* Text Analizer *
? A text analizer reads an input string and
! returns the number of spaces, letters, numbers, etc.
*/

#include <iostream>
#include <cctype>

int main(void)
{
    std::cout << "Text Analizer. Enter input string and enter '.' for terminate input.\n";
    char ch = std::cin.get();

    int letters = 0;
    int digits = 0; 
    int spaces = 0;
    int puncts = 0;
    int others = 0;

    while (ch != '.')
    {
        if (isspace(ch))
            ++spaces;
        else if (isalpha(ch))
            ++letters;
        else if (isdigit(ch))
            ++digits;
        else if (ispunct(ch))
            ++puncts;
        else ++others;
        ch = std::cin.get();
    }
     
    std::cout << letters << " letters.\n"
              << digits << " digits.\n"
              << spaces << " spaces.\n"
              << puncts << " puncts.\n"
              << others << " others.\n"; 
    return 0;
}
