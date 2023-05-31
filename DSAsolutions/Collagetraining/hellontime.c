//print hello n times using for loop and same progrqm using do while loop
//WAP to print odd number till n 
//additioh of n numbers
// check if number is palindrome

#include<stdio.h>

int main()
{
    int pali;
    scanf("%d",&pali);

    if(pali%2==0)
    {
        while (pali!=0)
        {
            int mod=pali%10;
            printf("\n%d",mod);
            pali = pali/10;
        }
    }  
    return 0;
}
