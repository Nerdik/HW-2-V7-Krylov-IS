// Вариант 7

#include <iostream>
#include <cmath>


int f(int x)
{
    int result = ((x - x % 10) / 10) % 10;

    return result;
}


int main()
{
    int a, b, c;

    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;

    std::cout << "Input c: "; 
    std::cin >> c;

    int z = f(a) + f(b) - f(c);

    std::cout << "z = " << z << std::endl;

    return 0;
}