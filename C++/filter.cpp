#include <iostream>

void filter(bool(*)(int), int[], unsigned);

int main() {
    int numbers[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    const unsigned n = std::size(numbers);

    std::cout << "Чётные числа:\n";
    filter([](int x){ return x % 2 == 0; }, numbers, n);

    std::cout << "Положительные числа:\n";
    filter([](int a){ return a > 0; }, numbers, n);

    return 0;
}

void filter(bool(*func)(int), int array[], unsigned length) {
    for (int i = 0; i < length; ++i) {
        if (func(*(array + i))) {
            std::cout << *(array + i) << '\t';
        }
    }
    std::cout << std::endl;
}
