#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[60]="Rutaysiire Gaekh";
    for(i=0;name[i];i++){
        name[i]=tolower(name[i]);
    };
    printf("your name is: %s",name);
    return 0;
}