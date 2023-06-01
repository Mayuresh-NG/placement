#include<stdio.h>
#include<math.h>

// int main()
// {
//     int num;
//     int size;
//     scanf("%d",&num);
//     scanf("%d",&size);

//     int j = num%10;
//     printf("%d\n",j);
//     int n=num/10;
//     printf("%d\n",n);
//     int k = (j*pow(10,size-1))+n;
//     printf("%d",k);
//     return 0;
// }

//print prime digits
int prime(int n);
void main()
{
	int num,res=0;
    int size;
	
	scanf("%d",&num);
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        int j = num%10;
        res=prime(j);
        if(res==0)
		printf("\n%d IS A PRIME NUMBER",j);
        num = num/10;
    }
	
}

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}