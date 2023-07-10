int getSumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    std::unordered_set<int> visited;

    while (n != 1) {
        if (visited.find(n) != visited.end()) {
            // If we encounter a cycle, the number is not happy
            return false;
        }
        visited.insert(n);
        n = getSumOfSquares(n);
    }

    // If the number reaches 1, it is happy
    return true;
}
