//Convert a string to an integer (atoi implementation).
int stringToInteger(string str) {
    int i = 0, n = str.length();
    long result = 0; // To handle overflow safely
    int sign = 1;

    // Step 1: Ignore leading whitespace
    while (i < n && str[i] == ' ') {
        i++;
    }

    // Step 2: Check for sign
    if (i < n && (str[i] == '+' || str[i] == '-')) {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Process digits and build the number
    while (i < n && isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');

        // Step 4: Check for overflow
        if (result * sign > INT_MAX) return INT_MAX;
        if (result * sign < INT_MIN) return INT_MIN;

        i++;
    }

    return result * sign;
}
