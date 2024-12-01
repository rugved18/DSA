string compressString(const string& str) {
    int n = str.length();
    if (n == 0) return ""; // Handle empty string case
    string prev = str[0];

    string compressed = "";
    int count = 1; // Initialize count of current character

    for (int i = 1; i < n; i++) {
        if (str[i] == prev) {
            count++; // Increment count for consecutive characters
        } else {
            compressed += prev + to_string(count); // Append character and count
            prev = str[i];
            count = 1; // Reset count
        }
    }
    // Append the last character and its count
    compressed += prev + to_string(count);

  if(compressed.lenght() > str.length()){
    return str;
  }
  return compressed;
}
