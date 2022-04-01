#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define Length 100

struct heap {
    
    int data;
    int pos;
    struct heap *next;
    struct heap *prev;
};


void initialize();
void max();
void max_val();
void display();



int arr_max[Length];

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
        printf("\n ***** MIN HEAP ******");
        
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
                display();
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
    
    

}

void display()
{
    
}
