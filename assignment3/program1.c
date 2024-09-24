#include <stdio.h>

int main() {
    int n, i;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array to store marks
    int marks[n];

    // Get marks from the user
    printf("Enter marks for %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Print the marks
    printf("\nMarks of all students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}