#include <stdio.h>
#include <stdio.h>

int main() {
    char ch;
    printf("Name:Adway Mohan Rakshit MCA sec A roll 2");
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}
