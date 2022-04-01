#include<stdio.h>

#define Length 100

void initalize();
void swap(int *a, int *b);



//MAX HEAP
void insert_max(int val);
void max_heapify(int i);
void display_max();

int arr_max[Length], max_size = 0;

int main()
{
    int arr[Length] = {3,4,9,5,2}, i = 5 , num;
    
    /*do
    {
        printf("\n Enter the Number for Max-Heap (-1 to Exit): ");
        scanf("%d", &num);
        
        arr[i] = num;
        i++;
    }
    while(num != -1);
    
    
    
    for(int j = 0; j < i - 1 ; j++)
    {
        
        printf("%d ", arr[j]);
    }*/
    
    
    for(int j = 0; j < i ; j++)
    {
        
        insert_max(arr[j]);
    }
    
    display_max();
    
    
    
    
    return 0;
}

void insert_max(int val)
{
    
    if (max_size == 0)
    {
        arr_max[max_size] = val;
        max_size++;
    }
    else
    {
        arr_max[max_size] = val;
        max_size++;
        
        for(int i = (max_size/2)-1; i >=0; i--)
        {
            max_heapify(i);
        }
    }
    
}


void max_heapify(int i)
{
    
    if (max_size == 1)
    {
        
        printf("Only one element");
    }
    else
    {
        int large = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < max_size && arr_max[left] > arr_max[i])
        {
            large = left;
        }
        if (right < max_size && arr_max[right] > arr_max[i])
        {
            large = right;
        }
        if (large != i)
        {
            swap(&arr_max[i], &arr_max[large]);
            max_heapify(large);
        }
    }
    
}


void swap(int *a, int *b)
{
    
    int temp = *b;
    *b = *a;
    *a = temp;
    
}

void display_max()
{
    int i = 5; 
    
    printf("\n HEAP \n");
    for(int j = 0; j < i ; j++)
    {
        
        printf("\n%d ", arr_max[j]);
    }
    
}
