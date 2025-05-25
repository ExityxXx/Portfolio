#include <iostream>
#include <vector>

std::vector<int> filter(bool(*)(int), int[], unsigned);

int main() {
    int numbers[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    const unsigned n = std::size(numbers);

    std::cout << "Чётные числа:\n";
    std::vector<int> even_values = filter([](int x){ return x % 2 == 0; }, numbers, n);

    for (const int &element : even_values) {
        std::cout << element << '\t';
    }
    
    std::cout << "\nПоложительные числа:\n";
    std::vector<int> absolute_values = filter([](int a){ return a > 0; }, numbers, n);

    for (const int &element : absolute_values) {
        std::cout << element << '\t';
    }
    return 0;
}

std::vector<int> filter(bool(*func)(int), int array[], unsigned length) {
    std::vector<int> filtered_array;

    for (int i = 0; i < length; ++i) {
        if (func(*(array + i))) {
            filtered_array.push_back(*(array + i));
        }
    }
    return filtered_array;
}
