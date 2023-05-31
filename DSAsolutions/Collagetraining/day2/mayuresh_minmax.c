#include<stdio.h>
void Min_max(int a[]);

void Min_max(int a[])
{
    int min,max;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0) 
        {
            min = max = a[i];
        } 
        else
        {
            if (min > a[i])
            {
                min = a[i];
            }
            if (max < a[i])
            {
                max = a[i];
            }
        }
   }
  printf("\n Minimum : %d", min);
  printf("\n Maximum : %d", max);
}

int main() {
  int a[10], i, min, max;
  printf("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", & a[i]);
  }
  Min_max(a);
  return 0;
}