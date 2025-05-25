#include <iostream>
#include <string>

int add(int, int);
int substract(int, int);
int operation(int(*)(int, int), int, int);

int main() {
    int n = 5, l = 2;

    int result = operation(add, n, l); // 7 
    std::cout << "Result: " <<  result << std::endl;
    
    result = operation(substract, n, l); 
    std::cout << "Result: " << result << std::endl;

    return 0;
}

int add(int a, int b) { return a + b; }
int substract(int a, int b) { return a - b; }
int operation(int(*op)(int, int), int a, int b) { return op(a, b); }
