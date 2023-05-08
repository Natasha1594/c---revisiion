#include <iostream>

int main() {
    int count = 0;
    int result = 1;
    int num;

    while (count < 10) {
        std::cout << "Enter a number between 6 and 79: ";
        std::cin >> num;

        if (num >= 6 && num <= 79 && num % 2 == 0 && num % 7 == 0) {
            result *= num;
            count++;
        }
    }

    std::cout << "Multiplication of even numbers divisible by 7 between 6 and 79: " << result << std::endl;

    return 0;
}
