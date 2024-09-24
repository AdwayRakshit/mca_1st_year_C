#include <stdio.h>

struct Student {
    int rollNo;
    char name[100];
    char address[100];
    int age;
    float marks;
};

void displayDetails(struct Student students[], int count) {
    printf("\nDetails of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);
        printf("Address: %s", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    struct Student students[12];

    for (int i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar();  // To consume the newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    displayDetails(students, 12);

    return 0;
}
