#include<stdio.h>
#define Length 50


void initialize();
void get_details();
void swap(int *a, int *b);
void display(int arr[], int n);

// MAX HEAP
void max();
void max_heap();
void insert_max(int val);
void max_heapify(int i);

int arr_max[Length], max_size = 0;

int arr[Length], arr_size = -1;

int main()
{
    initialize();
    
    return 0;
}

void initialize()
{
    
    int ch;
    
    do
    {
        printf("\n\n ***** HEAPS *****");
        printf("\n 1. Enter Values");
        printf("\n 2. MAX Heap");
        printf("\n 3. MIN Heap");
        printf("\n 4. Exit");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1 :
            {
                get_details();
                break;
            }
            case 2 :
            {
                max();
                break;
            }
            case 3 :
            {
                
                break;
            }
            case 4 :
            {
                printf("\n Thank You");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
                break;
            }
        }
        
    }while(ch != 4);
    
}

void get_details()
{
 
    int num = 0;
    
    while(num != -1)
    {
        printf("\n Enter the Number (-1 to Exit) : ");
        scanf("%d", &num);
        
        arr_size++;
        arr[arr_size] = num;
        
    }
    
    printf("\n The Elements in Array are : ");
    for(int j = 0; j < arr_size; j++)
    {
        printf("%d ", arr[j]);
    }
    
}

// MAX HEAP

void max()
{
    
    int ch;
    
    do
    {
        printf("\n\n ***** MAX HEAP *****");
        printf("\n 1. Convert Array to Max Heap");
        printf("\n 2. Display Max Heap");
        printf("\n 3. Main Menu");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1 : 
            {
                max_heap();
                break;
            }
            case 2 :
            {
                display(arr_max, max_size);
                break;
            }
            case 3 :
            {
                printf("\n Returning Main Menu");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
            }
        }
    }while(ch != 3);
    
}

void max_heap()
{
    
    for(int i = 0; i < arr_size; i++)
    {
        
        insert_max(arr[i]);
    }
    
    printf("\n Max Heap Created.");
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
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

void display(int arr[], int n)
{
    
    printf("\n\n -----MAX HEAP----- \n");
    for(int i = 0; i < n ; i++)
    {
        
        printf("%d ", arr[i]);
    }
    
}
