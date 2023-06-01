#include<stdio.h>
#include<math.h>

int Is_Prime(int num)
{
    if(num==1) return 0;
    if(!(num%2)) return num==2;
    int count = 0 ;
    for (int i = 3; i <=sqrt(num); i++)
    {
        if(!(num%i)) return 0;
    }
    return 1;
}
int main()
{
    Is_Prime(125);
}