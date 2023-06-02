#include<stdio.h>

//zigzaf vetical column
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     int val=1,val1=2*num-1,val2=1;
//     for (int i=1;i<=num;i++,val1-=2,val2+=2)
//     {
//         val=i;
//         for (int j = 1; j <= num; j++)
//         {
//             printf("%d ",val);
//             if(j&1) val+=val1;
//             else val+=val2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//cross and plus patern
// int main()
// {   
//     int num;
//     scanf("%d",&num);
//     for (int row = 1; row <= num; row++)
//     {
//         for (int col = 1; col <= num; col++)
//         {
//             if(row==col) printf("%d",row);
//             else if(row==(num/2)+1) printf("%d",col);
//             else if(col==(num/2)+1) printf("%d",row);
//             else if(row+col ==num+1) printf("%d",row);
//             else printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main()
{   
    int num;
    scanf("%d",&num);
    int k=num;
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if(col>k-1)
            {
                printf("%d ",col);
            }
            else printf(" ");
        }
        k--;
        printf("\n");
    }
    return 0;
}