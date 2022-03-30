#include<stdio.h>
#include<conio.h>
#define Length 20


void initalize();
void enqueue();
void dequeue();
void display();


struct queue{
    
    int arr[Length];
    int rear = -1;
    int front = -1;
}q;

int main()
{
    
    initalize();
    
    return 0;
}

void initalize()
{
    
    int ch;
    
    do {
        printf("\n\tQueue")
        
        printf("\n 1. Enqueue Operation");
        printf("\n 2. Dequeue Operation");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        
        switch(ch){
            
            case 1 : enqueue();
                break;
            case 2 : dequeue();
                break;
            case 3 : display();
                break;
            case 4 : printf("Thank You");
                break;
            default : printf("Invalid Option : ");
                break;
        }
    }while(ch != 4);
    
}

void enqueue()
{
    
    int value;
    
    if (q.rear == Length-1)
    {
        printf("Queue Overflow");
    }
    else {
        
        if (q.front == -1){
            q.front = 0;
        }
        
        printf("\n Enter the number to be inserted : ");
        scanf("%d", &value);
        
        q.rear++;
        q.arr[q.rear] = value;
    }
}

void dequeue()
{
    
    if (q.front == -1)
    {
        printf("\n Stack Underflow");
    }
    else{
        
        printf("\n Element deleted from the queue is %d ", q.arr[q.front]);
        q.front++;
    }
}

void display()
{
    
    if (q.front == -1){
        printf("\n Queue is Empty");
    }
    else
    {
        
        printf("\n Queue : \n");
        for(int i = q.front; i <= q.rear; i++){
            printf("%d", q.arr[i]);
        }
    }
    
}
