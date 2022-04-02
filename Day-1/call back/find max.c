#include <stdio.h>

void getdetails(void (*ptr)());
void max(int arr[],int n);

void (*ptr)();

int main() 
{
    ptr = max;
    
    getdetails(ptr);
    return 0;
}

void getdetails(void (*ptr)())
{
    int n;
    int arr[100];
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    ptr(arr,n);
}

void max(int arr[],int n)
{
    
    for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);
    
    
}
