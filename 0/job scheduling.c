#include <stdio.h>

int main() {
    int n = 5;

    char id[] = {'a', 'b', 'c', 'd', 'e'};
    int deadline[] = {2, 1, 2, 1, 3};
    int profit[] = {100, 19, 27, 25, 15};

    // Sort jobs by profit (descending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (profit[i] < profit[j]) {
                // swap profit
                int temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;

                // swap deadline
                temp = deadline[i];
                deadline[i] = deadline[j];
                deadline[j] = temp;

                // swap id
                char t = id[i];
                id[i] = id[j];
                id[j] = t;
            }
        }
    }

    // Find maximum deadline
    int max_deadline = 0;
    for (int i = 0; i < n; i++) {
        if (deadline[i] > max_deadline)
            max_deadline = deadline[i];
    }

    // Initialize slots (-1 means empty)
    int slot[max_deadline];
    for (int i = 0; i < max_deadline; i++)
        slot[i] = -1;

    int total_profit = 0;

    // Assign jobs to slots
    for (int i = 0; i < n; i++) {
        for (int j = deadline[i] - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                slot[j] = i;
                total_profit += profit[i];
                break;
            }
        }
    }

    // Output selected jobs
    printf("Selected jobs: ");
    for (int i = 0; i < max_deadline; i++) {
        if (slot[i] != -1) {
            printf("%c ", id[slot[i]]);
        }
    }

    printf("\nTotal Profit: %d\n", total_profit);

    return 0;
}