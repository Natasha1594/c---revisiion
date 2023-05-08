#include <iostream>

int main() {
    int count = 0; // Counter for number of valid inputs
    int result = 1; // Initialize the result variable to 1 to avoid multiplying by 0
    int num; // Variable to hold the user input

    // Keep asking for input until 10 valid numbers have been entered
    while (count < 10) {
        std::cout << "Enter a number between 6 and 79: ";
        std::cin >> num;

        // Check if number is even, divisible by 7, and within the specified range
        if (num >= 6 && num <= 79 && num % 2 == 0 && num % 7 == 0) {
            result *= num; // Multiply the result by the valid input
            count++; // Increment the counter for valid inputs
        }
    }

    // Display the final result
    std::cout << "The multiplication of even numbers divisible by 7 between 6 and 79 is: " << result << std::endl;

    return 0;
}
