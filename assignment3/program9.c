#include <stdio.h>

int main() {
    int n, i, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Element found at index %d\n", i);
    } else {
        printf("Element not found\n");
    }
    return 0;
}