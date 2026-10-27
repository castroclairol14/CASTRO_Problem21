#include <stdio.h>

int main() {
    int n, i = 1, rejected = 0;
    float expense, budget = 500, total = 0;

    printf("Daily Budget: P500\n");
    printf("How many expenses? ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);

        if (expense < 0) {
            printf("Invalid amount!\n");
        }
        else if (expense > budget) {
            printf("Expense rejected!\n");
            rejected++;
        }
        else {
            budget = budget - expense;
            total = total + expense;
            printf("Remaining budget: P%.2f\n", budget);
        }

        i++;
    }

    printf("\n--- SUMMARY ---\n");
    printf("Total Expenses: P%.2f\n", total);
    printf("Remaining Budget: P%.2f\n", budget);
    printf("Rejected Expenses: %d\n", rejected);

    return 0;
}