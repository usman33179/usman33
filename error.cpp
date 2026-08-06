#include <iostream>

void show(int, double)
{
    std::cout << "show(int, double)\n";
}

void show(double, int)
{
    std::cout << "show(double, int)\n";
}

int main()
{
    show(10, 10);  // Ambiguous call
    return 0;
}