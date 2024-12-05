//check if the year is leap or not 
bool isLeapYear(int year) {
    // A year is a leap year if:
    // 1. It is divisible by 4 and not divisible by 100, OR
    // 2. It is divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true; // Leap year
    }
    return false; // Not a leap year
}
