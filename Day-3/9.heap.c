#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define Length 100


void initialize();
void swap(int *a, int *b);

// MAX HEAP
void insert_max(int val);
void max_heapify(int i);
void max();
void max_val();
void display_max();

int arr_max[Length], max_size = 0;


int main()
{
    initialize();
    return 0;
}

void initialize()
{
    int ch;
    
    do {
        
        printf("\n ***** HEAP *****");
        printf("\n 1. Max Heap");
        printf("\n 2. Min Heap");
        printf("\n 3. Exit");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        
        switch (ch)
        {
            case 1: 
            {
                max();
                break;
            }
            
            case 2 :
            {
                
                break;
                
            }
            
            case 3 :
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
    } while(ch != 3);
}

void max()
{
    
    int ch;
    
    do 
    {
        printf("\n ***** MAX HEAP ******");
        
        printf("\n 1. Enter Values");
        printf("\n 2. Display");
        printf("\n 3. Main Menu");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
                
        switch(ch)
        {
            case 1 : 
            {
                max_val();
                break;
            }
                    
            case 2 :
            {
                display_max();
                break;
            }
            
            case 3 :
            {
                printf("\n Returning Main menu");
                break;
            }
            default :
                printf("\n Invalid Input");
                break;
            }
        }while(ch != 3);
    
}

void max_val()
{
    int arr[Length] = {3,4,9,5,2}, i = 5 , num;
    
    for(int j = 0; j < i - 1; j++)
    {
        
        insert_max(arr[j]);
    }
    

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

void swap(int *a, int *b)
{
    
    int temp = *b;
    *b = *a;
    *a = temp;
    
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
