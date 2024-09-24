
#include <stdio.h>

int main() {
    int arr[] = {5, 7, 3, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int highest = -2147483648, second_highest = -2147483648;

    for (int i = 0; i < n; i++) {
        if (arr[i] > highest) {
            second_highest = highest;
            highest = arr[i];
        } else if (arr[i] > second_highest && arr[i] != highest) {
            second_highest = arr[i];
        }
    }

    if (second_highest == -2147483648) {
        printf("No second highest number\n");
    } else {
        printf("Second highest number is %d\n", second_highest);
    }

    return 0;
}
