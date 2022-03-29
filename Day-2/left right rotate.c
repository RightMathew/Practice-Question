#include<stdio.h>

#define Length 100

void getNumbers();
void RightRotate(int *arr, int n);
void LeftRotate(int *arr, int n);
void print(int *arr, int n);

int main()
{
    getNumbers();
    
    return 0;
}

void getNumbers()
{
    int arr[Length], n, ch;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    printf("Enter the numbers : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    do {
        
        printf("\nChoose :\n1. Left Rotation\t2. Right Rotation\t3. Cancel\n");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:LeftRotate(arr, n);
        break;
        case 2:RightRotate(arr, n);
        break;
        case 3:printf("Thank You : ");
        break;
        default:printf("Select correct OPtion : ");
        }
    }while(ch != 3);
}

void LeftRotate(int *arr, int n){
    
    int temp,i,j,k;
    printf("Enter Times Left Rotate: ");
    scanf("%d", &k);
     
    for(i=0; i<k; i++)
    {
        temp=arr[0];
        for(j=0; j<n-1; j++)
        {
           arr[j]=arr[j+1];
		}
 
         arr[n-1]=temp;
        
 
    }
    printf("\nAfter Left Rotate  : \n");
    
    print(arr,n);
    
}
void RightRotate(int *arr, int n)
{
    int temp,i,j,k;
    printf("Enter Times Right Rotate: ");
    scanf("%d", &k);
     
    for(i=0; i < k; i++)
    {
        
        temp = arr[n-1];
        for(j = n-1; j > 0; j--)
        {
            arr[j] = arr[j-1];
        }
        
        arr[0] = temp;
    }
    
    printf("\nAfter Right Rotate  : \n");
    
    print(arr,n);
    
}

void print(int *arr, int n)
{
    
    for(int i = 0; i < n; i++)
    {
        
        printf("%d ", arr[i]);
    }
}
