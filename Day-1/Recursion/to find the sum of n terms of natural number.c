#include<stdio.h>

int sumofnat(int n);

int main()
{
    int n;
    
    printf("Enter a Number : ");
    scanf("%d", &n);
    
    printf("The Sum of %d Natural Number is : %d", n, sumofnat(n));
    return 0;
}

int sumofnat(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n + sumofnat(n-1));
}


