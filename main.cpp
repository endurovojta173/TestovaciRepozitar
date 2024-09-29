#include <iostream>

int main()
{
    std::cout << "Hello world";

    std::cout << "\nInput first number: ";

    int number1 = 0;
    int number2 = 0;
    std::cin >> number1;
    std::cout<<"Your first number: " << number1;
    std::cout << "\nInput second number: ";
    std::cin>>number2;
    std::cout<<"Your second number: " << number2;

    getchar();
    getchar();
    return 0;
}