#include<stdio.h>

// int main()
// {
//     int a = 15;
//     int b = 20;
//     int c = 60;
//     //max of two number
//     printf("Max of two number\n");
//     if(a>b)
//     {
//         printf("%d is max",a);
//     }
//     else printf("%d is max",b);


//     //max of three number
//     printf("\nMax of three number\n");
//     if(a>b && a>c)
//     {
//         printf("%d is max",a);
//     }
//     else if(b>c && b>a)
//     {
//         printf("%d is max",b);
//     }
//     else printf("%d is max",c);
// }

//calculyaor program using function and switch case 
// int main()
// {
//     int a;
//     int num1,num2;
//     printf("Calculator\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n=>");
//     scanf("%d",&a);
//     printf("\nEnter two numbers");
//     scanf("%d%d",&num1,&num2);
//     int res1,res2,res3;
//     float res4;
//     switch(a)
//     {
//         case 1:
//             res1 = num1+num2;
//             printf("%d",res1);
//             break;

//         case 2:
//             res2 = num1-num2;
//             printf("%d",res2);
//             break;

//         case 3:
//             res3 = num1*num2;
//             printf("%d",res3);
//             break;

//         case 4:
//             res4 = num1/num2;
//             printf("%f",res4);
//             break;

//         default:
//         break;    
//     }
// }

//prime number
int main()
{
    int p;
    printf("Prime or not\nEnter a number");
    scanf("%d",&p);
    int flag = 0;
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        {
            printf("%d is not a prime number",p);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a prime number");
    }

    return 0;
}