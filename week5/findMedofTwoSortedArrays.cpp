double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int n = A.size();

    int m = B.size();

    if (n > m) {
        return findMedianSortedArrays(B, A);
    }

    int l = 0;
    int r = n;

    while (l <= r) {
        int i = (l + r) / 2;
        int j = (n + m + 1) / 2 - i;

        if (i < n && j > 0 && B[j - 1] > A[i]) {
            l = i + 1;
        } else if (i > 0 && j < m && B[j] < A[i - 1]) {
            r = i - 1;
        } else {
            int maxLeft = 0;
            if (i == 0) {
                maxLeft = B[j - 1];
            } else if (j == 0) {
                maxLeft = A[i - 1];
            } else {
                maxLeft = max(A[i - 1], B[j - 1]);
            }

            if ((n + m) % 2 == 1) {
                return maxLeft;
            }

            int minRight = 0;
            if (i == n) {
                minRight = B[j];
            } else if (j == m) {
                minRight = A[i];
            } else {
                minRight = min(A[i], B[j]);
            }

            return (maxLeft + minRight) / 2.0;
        }
    }
    // Explaination: https://www.youtube.com/watch?v=LPFhl65R7ww
}
