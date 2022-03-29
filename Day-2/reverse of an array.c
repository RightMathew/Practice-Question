#include<stdio.h>
#define Length 100

void getNumbers(void (*r)(),void (*p)());
void reverse();
void print();

void (*g)();
void (*r)();
void (*p)();

int main()
{
    
    g = getNumbers;
    g(reverse,print);
       
    return 0;
}

void getNumbers(void (*r)(),void (*p)())
{
    int arr[Length], n;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    printf("Enter the numbers : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe Elements are : ");
    p(arr, n);
    printf("\nThe reversed array are : ");
    
    r(arr, n);
    p(arr, n);
    
}

void reverse(int *arr, int n)
{
    int temp;
    
    for(int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n - i - 1] = temp;
    }
}

void print(int *arr, int n)
{

    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
