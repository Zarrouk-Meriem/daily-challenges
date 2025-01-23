class Solution {
public:
    void pathCounter(int i, int j, int m, int n, int& count) {

        if (i == m - 1 && j == n - 1) {
            count++;
            return;
        }
        if (i < m - 1) {
            pathCounter(i + 1, j, m, n, count);
        }
        if (j < n - 1) {
            pathCounter(i, j + 1, m, n, count);
        }
    }
    int uniquePaths(int m, int n) {
        int count = 0;
        pathCounter(0, 0, m, n, count);
        return count;
    }
};
