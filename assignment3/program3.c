#include <stdio.h>

int main() {
    int arr[100], n, x, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    printf("Enter the position (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }


    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];


    arr[pos] = x;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) 
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}