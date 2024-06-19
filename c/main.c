// #include<stdio.h>
// int main(){
//     char name[20]={};
//     printf("enter your name:");
//     scanf("%s",name);
//     printf("your name is:%s",name);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char name[20]={};
//     printf("enter your name:");
//     gets(name);
//     printf("your name is:");
//     puts(name);
//     printf("length of your name is:%d",strlen(name));
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     union {
//         char name[32];;
//         int num;
//     }abc;
//     printf("size of name is %d\n",sizeof(abc.name));
//     printf("size of num is %d\n",sizeof(abc.num));
//     printf("size of union is %d",sizeof(abc));
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     struct {
//         char name[32];;
//         int num;
//     }abc;
//     printf("size of name is %d\n",sizeof(abc.name));
//     printf("size of num is %d\n",sizeof(abc.num));          
//     printf("size of union is %d",sizeof(abc));
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     system("ls");
//     system("echo 'My life is lifing' >yearones.txt");
//     system("cat yearones.txt");
//     return 0;
// }
#include<stdio.h>
int main(){
    char name[]="gael iceman";
    printf("length of name is:%d\n",strlen(name));
    printf("address of name is:%u",&name);
    return 0;
}
