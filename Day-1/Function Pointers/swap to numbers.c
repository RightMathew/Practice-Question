#include<stdio.h>

void swap(int a, int b);

void (*s)(int, int);

int main()
{
    int a, b;
    
    printf("Enter the First Number : ");
    scanf("%d", &a);
    
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    
    printf("\nThe value of A : %d and B : %d. --> Before Swapping", a, b);
    
    printf("\n\n Swapping\n\n");
    
    s = swap;
    s(a,b);
    
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of A : %d and B : %d. --> After Swapping", a,b);

}
