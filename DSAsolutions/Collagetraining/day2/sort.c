#include<stdio.h>

void display(int arr[],int size);
void selection(int arr[],int size);
void bubble(int arr[],int size);

void bubble(int arr[],int size)
{
    int tempsize;
    for(tempsize = size ; tempsize>=1;tempsize--)
    {
        for(int i=0 ; i<tempsize; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp ;
            }
        } 
    }
    display(arr,size);
}

void selection(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j = i+1; j<size+1 ; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    display(arr,size);
}

void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int a;
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array =>");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n1.Bubble sort\n2.Selection sort\nchoice=>");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        bubble(arr,size);
        break;
    
    case 2:
        selection(arr,size);
        break; 

    default:
        break;
    }

    return 0;
}