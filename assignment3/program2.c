#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter the number of students: ");
    scanf("%d", &n);

  
    struct Student {
        char name[50]; 
        int mathMarks;
        int englishMarks;
    } students[n];


    printf("\nEnter details for %d students:\n", n);
    for (i = 0; i < n; i++) {
      
        printf("Student %d:\n", i + 1);
        printf("  - Mathematics marks: ");
        scanf("%d", &students[i].mathMarks);
        printf("  - English marks: ");
        scanf("%d", &students[i].englishMarks);
    }

    
    printf("\nStudent Information and Total Marks:\n");
    for (i = 0; i < n; i++) {
      

        int totalMarks = students[i].mathMarks + students[i].englishMarks;
        printf("Student %d:\n", i + 1);
        printf("  - Mathematics marks: %d\n", students[i].mathMarks);
        printf("  - English marks: %d\n", students[i].englishMarks);
        printf("  - Total marks: %d\n", totalMarks);
    }

    return 0;
}