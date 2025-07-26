#include <iostream>

void print_arr(const int (*const arr)[3], const int rows);
void fill_arr(int (*arr)[3], const int rows);
void edit_arr(int (*arr)[3], const int rows, const int multiply_coefficent);

int main(void)
{
    int arr[4][3] {};

    std::cout << "4 rows, 3 columns to fill the array.\n";
    fill_arr(arr, 4); 

    std::cout << "\nArray:\n";
    print_arr(arr, 4);

    std::cout << "\nEdited array:\n";
    edit_arr(arr, 4, 2);
    print_arr(arr, 4);
    
    std::cout << "\nBye!\n";
    return 0;
}

void print_arr(const int (*const arr)[3], const int rows)
{
    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < 3; ++column)
            std::cout << arr[row][column] << '\t';
        std::cout << std::endl;
    }
}

void fill_arr(int (*arr)[3], const int rows)
{
    for (int row = 0; row < rows; ++row)
    {
        std::cout << "row #" << row+1 << ": \n";
        for (int column = 0; column < 3; ++column)
        {
            std::cout << "column #" << column + 1 << ": ";
            std::cin >> arr[row][column];
        }
    }
}

void edit_arr(int (*arr)[3], const int rows, const int multiply_coefficent)
{
    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < 3; ++column)
            arr[row][column] *= multiply_coefficent;
    }
}
