#include<stdio.h>

int main()
{
    int num;
    int val=1;
    scanf("%d",&num);
    for (int i=1;i<=num;i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",val++);
        }
        printf("\n");
    }
    return 0;
}
