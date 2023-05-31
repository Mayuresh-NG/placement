#include<stdio.h>

void AreCircle(float radius);
void AreaRectangle(int l,int b);
void AreaTriangle(int base,int height);
void CircumCircle(int rad);

int main()
{
    int a;
    float radius;
    int l,b;
    int base,height;
    int rad;
    printf("\n1.Area of Circle\n2.Area of rectangle\n3.Area of triangle\n4.Circumfarence of circle\nEnter choice=>");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\nEnter radius of circle: ");
        scanf("%f",&radius);
        AreCircle(radius);
        break;
    
    case 2:
        printf("\nEnter lenght and bredth of rectangle: ");
        scanf("%d%d",&l,&b);
        AreaRectangle(l,b);
        break;

    case 3:
        printf("\nEnter base and height of triangle: ");
        scanf("%d%d",&base,&height);
        AreaTriangle(base,height);
        break;

    case 4:
        printf("\nEnter radius of circle: ");
        scanf("%d",&rad);
        CircumCircle(rad);
        break;

    default:
        break;
    }
    return 0;
}

void AreCircle(float radius)
{
    float area = 3.14*radius*radius;
    printf("%f is area of circcle",area);
}

void AreaRectangle(int l, int b)
{
    int rectarea = l*b;
    printf("%d is area of rectangle",rectarea);
}

void AreaTriangle(int base, int height)
{
    int triarea = 0.5*base*height;
    printf("%d is area of triangle",triarea);
}

void CircumCircle(int rad)
{
    float circum = 2*3.14*rad;
    printf("%2f is area of circle",circum);
}
