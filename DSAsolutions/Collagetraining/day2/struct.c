#include<stdio.h>
#include<string.h>

struct customer
{
    char* name;
    int AccountNo;
    int age;
    char* branch;
    char* address;
}c[10];


int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s",&c[i].name);
        printf("%s",&c[i].name);
    }

    return 0;
}