#include <stdio.h>

int main() {
    int val[] = {60, 100, 120};  // values
    int wt[] = {10, 20, 30};     // weights
    int W = 50;                  // capacity
    int n = sizeof(val) / sizeof(val[0]);

    int K[n + 1][W + 1];

    // Build DP table
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {

            if (i == 0 || w == 0) {
                K[i][w] = 0;
            }
            else if (wt[i - 1] <= w) {
                int include = val[i - 1] + K[i - 1][w - wt[i - 1]];
                int exclude = K[i - 1][w];

                K[i][w] = (include > exclude) ? include : exclude;
            }
            else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    printf("Maximum value = %d\n", K[n][W]);

    return 0;
}