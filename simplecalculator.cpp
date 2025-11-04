#include <iostream>

int main()
{
    double num1, num2;
    char op;
    std::cout << "Welcome!\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (op == '+')
        std::cout << "Result: " << num1 + num2 << '\n';
    else if (op == '-')
        std::cout << "Result: " << num1 - num2 << '\n';
    else if (op == '*')
        std::cout << "Result: " << num1 * num2 << '\n';
    else if (op == '/')
    {
        if (num2 == 0)
            std::cout << "Error! Division by zero." << '\n';
        else
            std::cout << "Result: " << num1 / num2 << '\n';
    }
    else
        std::cout << "Invalid operator!" << '\n';

    std::cout << "Press Enter to exit...";
    std::cin.get(); // This only works if you flush the input first!
    std::cin.ignore(); // Add this line to flush newline after std::cin >>
    std::cin.get();

    return 0;
}