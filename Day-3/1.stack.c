#include<stdio.h>
#include<conio.h>
#define Length 10

void initialize();
void push();
void display();
void pop();
void peep();

void (*ptr)();

int arr[Length], top = -1;

int main()
{
    ptr = initialize;
    ptr();
    
    return 0;
}

void initialize()
{
    int ch;
    
    do 
    {
        printf("\n\n STACK");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEP");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n *******************");
        printf("\n\n Enter the Option : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                ptr = push;
                ptr();
                break;
            case 2:
                ptr = pop;
                ptr();
                break;
            case 3:
                ptr = peep;
                ptr();
                break;
            case 4:
                ptr = display;
                ptr();
                break;
            case 5:
                printf("\n Thank You");
                break;
            default :
                printf("\n Invalid Option Choose Correct One : ");
            
        }
    }while(ch != 5);    
}


void display()
{
    if (top == -1)
    {
        printf("\n The Stack is Empty");
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            printf("\n|%d|", arr[i]);
            printf("\n -- ");
        }
    }
    
}
void push()
{
    int val;
    
    printf("\n Enter the Number to be Pushed : ");
    scanf("%d", &val);
    
    if (top == Length-1)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        arr[top]=val;
        printf(" %d is Pushed into Stack", val);
    }
    
}

void pop()
{
    int val;
    
    if (top == -1)
    {
        printf("\n STACK UNDERFLOW");
    }
    else
    {
        val = arr[top];
        top--;
        printf("\n The value poped : %d", val);
    }
}

void peep()
{
    
    if (top == -1)
    {
        printf("\n Stack is Empty");
    }
    else
    {
        printf("\n The element at the top : %d", arr[top]);
    }
}
