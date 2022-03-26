#include<stdio.h>

int max(int a, int b);

int (*maxim)(int a, int b);

int main()
{
    int a, b;
    
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    
    maxim = max;
    
    printf("The Maximum of two numbers %d and %d is : %d ", a,b,maxim(a, b));
    
    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
    
}
