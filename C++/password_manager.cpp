#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "Задайте пароль: "; std::cin >> password;
    do {
        std::string entry;

        if (std::size(password) < 8) {
            std::cout << "Задайте пароль с длиной больше или равно 8. Текущая длина " << std::size(password)  << ".\n";
            exit(1);
        }

        std::cout << "Введите пароль: "; std::cin >> entry;

        if (entry == password) {
            std::cout << "Пароль верный!\n";
            exit(0);
        }
        else if (std::size(entry) < 8) {
            std::cout << "Длина пароля меньше 8 символов. Текущая длина " << std::size(entry) << ".\n";
        }
        else {
            std::cout << "Неверный пароль: '" << entry << "' Попробуйте еще.\n";
        }
    } while (true);

    return 0;
}
