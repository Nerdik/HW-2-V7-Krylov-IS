// Variant 7

#include <iostream>
#include <cmath>


int getSecondNum(int x)
{
    int result = (x / 10) % 10;

    return result;
}


int main()
{

    int a;
    std::cout << "Input a: ";
    std::cin >> a;

    int b;
    std::cout << "Input b: ";
    std::cin >> b;

    int c;
    std::cout << "Input c: "; 
    std::cin >> c;

    int z = getSecondNum(a) + getSecondNum(b) - getSecondNum(c);

    std::cout << "z = " << z << std::endl;

    return 0;
}