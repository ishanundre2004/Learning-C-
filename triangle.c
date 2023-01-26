#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first side: ");
    scanf("%d", &a);

    printf("Enter the second side: ");
    scanf("%d", &b);

    printf("Enter the third side: ");
    scanf("%d", &c);

    if (a==b && b==c && c==a)
    {
        printf("This is an Equilateral Triangle.");
    }
    else if (a==b||b==c||c==a)
    {
        printf("This is an Isosceles Triangle.");
    }
    else if (a!=b && b!=c && c!=a)
    {
        if (a*a==b*b+c*c || b*b==c*c+a*a||c*c==b*b+a*a)
        {
          printf("This is an Right Angle Triangle.");
        }
        else
        {
            printf("This is an Scalene Triangle.");
        }
        
}
    return 0;
}

