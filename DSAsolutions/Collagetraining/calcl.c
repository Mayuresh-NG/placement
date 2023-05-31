#include<stdio.h>

void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);

void add(int a, int b)
{
    int res1 = a+b;
    printf("%d",res1);
}

void sub(int a, int b)
{
    int res2 = a-b;
    printf("%d",res2);
}

void mul(int a, int b)
{
    int res3 = a*b;
    printf("%d",res3);
}

void div(int a, int b)
{
    int res4 = a/b;
    printf("%d",res4);
}

int main()
{
    int num1,num2;
    int a;

    printf("Calculator\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n=>");
    scanf("%d",&a);
    printf("\nEnter two numbers");
    
    scanf("%d%d",&num1,&num2);
    

    switch (a)
    {
    case 1:
    add(num1,num2);
        break;

    case 2:
    sub(num1,num2);
        break;

    case 3:
    mul(num1,num2);
        break;

    case 4:
    div(num1,num2);
        break;    
    
    default:
        break;
    }
    return 0;
}