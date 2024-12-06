//Function To check if an expression has balanced parentheses
bool isBalanced(string expr) {
    stack<char> s;

    // Traverse the expression
    for (char ch : expr) {
        // Push opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } 
        // Check for closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If stack is empty or top of stack doesn't match, it's unbalanced
            if (s.empty() || 
                (ch == ')' && s.top() != '(') || 
                (ch == '}' && s.top() != '{') || 
                (ch == ']' && s.top() != '[')) {
                return false;
            }
            s.pop(); // Pop the matching opening bracket
        }
    }

    // If the stack is empty, the parentheses are balanced
    return s.empty();
}
