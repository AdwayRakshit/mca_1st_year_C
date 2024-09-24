#include <stdio.h>

struct company {
    char name[100];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct company c;

    printf("Enter the company name: ");
    fgets(c.name, sizeof(c.name), stdin);

    printf("Enter the company address: ");
    fgets(c.address, sizeof(c.address), stdin);

    printf("Enter the company phone number: ");
    fgets(c.phone, sizeof(c.phone), stdin);

    printf("Enter the number of employees: ");
    scanf("%d", &c.noOfEmployee);

    printf("\nCompany Details:\n");
    printf("Name: %s", c.name);
    printf("Address: %s", c.address);
    printf("Phone: %s", c.phone);
    printf("Number of Employees: %d\n", c.noOfEmployee);

    return 0;
}
