//Longest common prefix in an array of strings.
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    // Sort the strings lexicographically
    sort(strs.begin(), strs.end());

    // Compare the first and last string
    string first = strs[0];
    string last = strs[strs.size() - 1];
    string prefix = "";

    for (int i = 0; i < min(first.length(), last.length()); i++) {
        if (first[i] == last[i]) {
            prefix += first[i];
        } else {
            break;
        }
    }

    return prefix;
}
