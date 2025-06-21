//sum of digit of number
int sumOfDigits(int n) {
    int sum = 0; // Initialize sum to 0

    // Loop until all digits are processed
    while (n > 0) {
        int lastDigit = n % 10; // Extract the last digit
        n = n / 10;             // Remove the last digit from the number
        sum += lastDigit;       // Add the last digit to the sum
    }

    return sum; // Return the total sum of the digits
}
