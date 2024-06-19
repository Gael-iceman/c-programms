
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s",&str);

    printf("Length of the string: %u\n",sizeof(str));

    return 0;
}
