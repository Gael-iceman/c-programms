#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char nation[10];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your nationality: ");
    scanf("%s", &nation);
    if (strcmp(nation, "American") == 0 && age >= 18) {
        printf("You are American and above 18.\n");
    } else {
        printf("You are not American or not above 18.\n");
    }

    return 0;
}
