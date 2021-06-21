#include <iostream>
#include <vector>
#include <cmath>

void PrintValue(int value)
{
    std::cout << "Value: " << value << std::endl;
}

void PrintSquare(int value)
{
    std::cout << "Squared: " << std::pow(value, 2) << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
    for (int value : values)
        func(value);
}

int main()
{

    std::vector<int> values = {1, 2, 3, 4, 5};
    ForEach(values, PrintValue);
    ForEach(values, PrintSquare);

    std::cin.get();
}