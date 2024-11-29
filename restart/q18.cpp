//Rearrange an array so that all even indices contain even numbers.
void rearrangeArray(vector<int>& arr) {
    int n = arr.size();
    int even = 0, odd = 1;  // Even and odd indices

    while (even < n && odd < n) {
        // If the number at the even index is already even, move to the next even index
        if (arr[even] % 2 == 0) {
            even += 2;
        }
        // If the number at the odd index is already odd, move to the next odd index
        else if (arr[odd] % 2 != 0) {
            odd += 2;
        }
        // If the conditions are not met, swap the elements
        else {
            swap(arr[even], arr[odd]);
            even += 2;
            odd += 2;
        }
    }
}
