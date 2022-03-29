#include<stdio.h>
#include<conio.h>
#define Length 10

void initialize();
void push();
void display();


void (*i)();

int arr[Length], top = -1;

int main()
{
    i = initialize;
    i();
    
    return 0;
}


void initialize()
{
    int ch;
    
    do 
    {
        printf("\n *****Main Menu*****");
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
                push();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                display();
                break;
            case 5:
                printf("\n Thank You");
                break;
            default :
                printf("\n Invalid Input");
            
        }
    }while(ch != 5);    
}

void display()
{
    if (top == -1)
    {
        printf("The Stack is Empty");
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
    
    printf("\n Enter the Number to be Pushed on the stack : ");
    scanf("%d", &val);
    
    if (top == Length-1)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        arr[top]=val;
    }
    
}
