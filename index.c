#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[60] = "rutaysiire gaekh";
    int i;

    for (i = 0; name[i]; i++) {
        name[i] = toupper(name[i]);
    }

    printf("your name is:%s", name);
    return 0;
}
