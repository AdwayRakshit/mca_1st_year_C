#include <stdio.h>

int main() {
    int arr[100], n, pos;

    // Get number of elements and position
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to overwrite the deleted element
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement size (logical deletion, array size remains the same)
    n--;

    // Print the modified array (optional)
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}