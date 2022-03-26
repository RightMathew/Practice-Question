#include<stdio.h>

int max(int *a, int *b);

int (*maxim)(int* , int*);

int main()
{
    int a, b, *aptr, *bptr;
    
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    
    aptr = &a;
    bptr = &b;
    
    maxim = max;
    int large = maxim(aptr, bptr); 
    printf("The Maximum of two numbers %d and %d is : %d ", a,b,large);
    
    return 0;
}

int max(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
    
}
