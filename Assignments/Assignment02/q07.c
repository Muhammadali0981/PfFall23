

#include <stdio.h>

void bubbleSort(int shirts[][2], int n, int ageAscending) {
    int swapped;
    do {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if ((ageAscending && shirts[i][0] > shirts[i + 1][0]) ||
                (!ageAscending && shirts[i][1] < shirts[i + 1][1])) {
                // learned sorting for this :)
                int tempAge = shirts[i][0];
                int tempPrice = shirts[i][1];
                shirts[i][0] = shirts[i + 1][0];
                shirts[i][1] = shirts[i + 1][1];
                shirts[i + 1][0] = tempAge;
                shirts[i + 1][1] = tempPrice;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    int shirts[100][2];
    int n, i;

    printf("Enter the number of shirts: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the age shirt %d is suitable for: ", i + 1);
        scanf("%d", &shirts[i][0]);
        printf("Enter the price of shirt %d: ", i + 1);
        scanf("%d", &shirts[i][1]);
    }

    // Sort by age in ascending order
    bubbleSort(shirts, n, 1);

    printf("\nSorted list in ascending order with respect to Age:\n");
    for (i = 0; i < n; i++) {
        printf("Age: %d Price: %d\n", shirts[i][0], shirts[i][1]);
    }

    // Sort by price in descending order
    bubbleSort(shirts, n, 0);

    printf("\nSorted list in descending order with respect to Price:\n");
    for (i = 0; i < n; i++) {
        printf("Age: %d Price: %d\n", shirts[i][0], shirts[i][1]);
    }

    return 0;
}
