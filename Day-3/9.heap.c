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

// MIN HEAP

void min();
void min_heap();
void insert_min(int val);
void min_heapify(int i);

int arr_min[Length], min_size = 0;

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
        printf("\n 2. Display Values");
        printf("\n 3. MAX Heap");
        printf("\n 4. MIN Heap");
        printf("\n 5. Flush Data");
        printf("\n 6. Exit");
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
                display(arr, arr_size);
                break;
            }
            case 3 :
            {
                max();
                break;
            }
            case 4 :
            {
                min();
                break;
            }
            case 5 :
            {
                arr_size = -1;
                printf("\n ----- Flushed. -----");
                break;
            }
            case 6 :
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
        
    }while(ch != 6);
    
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

// ****************************************  MAX HEAP ***************************************************

void max()
{
    
    int ch;
    
    do
    {
        printf("\n\n ***** MAX HEAP *****");
        printf("\n 1. Convert Array to Max Heap");
        printf("\n 2. Display Max Heap");
        printf("\n 3. Flush Data");
        printf("\n 4. Main Menu");
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
                printf("\n\n -----MAX HEAP----- \n");
                display(arr_max, max_size);
                break;
            }
            case 3 :
            {
                max_size = 0;
                printf("\n ----- Flushed. -----");
                break;
                
            }
            case 4 :
            {
                printf("\n Returning Main Menu");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
            }
        }
    }while(ch != 4);
    
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

// --------------------------------------------------------------------------------------------------------------------


// -------------------------------MIN HEAP-------------------------------------------------

void min()
{
    
    int ch;
    
    do
    {
        printf("\n\n ***** MAX HEAP *****");
        printf("\n 1. Convert Array to MIN Heap");
        printf("\n 2. Display MIN Heap");
        printf("\n 3. Flush Data");
        printf("\n 4. Main Menu");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1 : 
            {
                min_heap();
                break;
            }
            case 2 :
            {
                printf("\n\n -----MAX HEAP----- \n");
                display(arr_min, min_size);
                break;
            }
            case 3 :
            {
                min_size = 0;
                printf("\n ----- Flushed. -----");
                break;
                
            }
            case 4 :
            {
                printf("\n Returning Main Menu");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
            }
        }
    }while(ch != 4);
    
}

void min_heap()
{
    for(int i = 0; i < arr_size; i++)
    {
        
        insert_min(arr[i]);
    }
    
    printf("\n Min Heap Created.");
}


void insert_min(int val)
{
    if (min_size == 0)
    {
        arr_min[0] = val;
        min_size++;
    }
    
    else
    {
        arr_min[min_size] = val;
        min_size++;
        
        for(int i = (min_size/2)-1; i >= 0; i--)
        {
            min_heapify(i);
        }
        
    }
    
}

void min_heapify(int i)
{
    if (min_size == 1)
    {
        printf("Only one Element");
    }
    
    int small = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < min_size && arr_min[small] > arr_min[left])
    {
        small = left;
    }
    if (right < min_size && arr_min[small] > arr_min[right])
    {
        small = right;
    }
    
    if (small != i)
    {
        swap(&arr_min[i], &arr_min[small]);
        min_heapify(small);
    }
}

//-----------------------------------------------------------------------------------------


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

void display(int arr[], int n)
{
    if (n == 0 || n == -1){
        printf("\n The array is Empty");
    }
    else{
        for(int i = 0; i < n ; i++)
        {
            printf("%d ", arr[i]);
        }
        
    }
    
}
