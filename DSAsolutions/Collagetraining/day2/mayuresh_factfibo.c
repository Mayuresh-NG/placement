#include<stdio.h>

int factorial(int num);
int fibonacci(int num);
int main()
{
    int a;
    int num;
    int res;
    int fibres;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("\n1.Factorial\n2.Fibonacci\nchoice=>");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        res = factorial(num);
        printf("factorial is %d",res);
        break;
    
    case 2:
        fibres = fibonacci(num);
        printf("fibonacci is %d",fibres);
        break;

    default:
        break;
    }


    return 0;
}

int factorial(int num)
{
    if(num>=1)
    {
        return num*(factorial(num-1));
    }
    else return 1;
}

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1; 
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
