#include <iostream>
#include <string>

bool is_even(int);
bool is_positive(int);

void action(bool(*)(int), int[], unsigned);

int main() {
    int numbers[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    const unsigned n = std::size(numbers);
    std::cout << "Чётные числа:\n";
    action(is_even, numbers, n);
    std::cout << "Положительные числа:\n";
    action(is_positive, numbers, n);

    return 0;
}
bool is_even(int x) { return x % 2 == 0; }
bool is_positive(int x) { return x > 0; }

void action(bool(*func)(int), int array[], unsigned length) {
    for (int i = 0; i < length; ++i) {
        if (func(*(array + i))) {
            std::cout << *(array + i) << '\t';
        }
    }
    std::cout << std::endl;
}
