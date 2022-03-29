#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define Length 100

void getdetails();
void evaluateexp();
void push(float val);
float pop();

void (*ptr)();

float stack[Length];
int top = -1;

int main()
{
    ptr = getdetails;
    ptr();
    
    return 0;
}

void getdetails()
{
    float val;
    char exp[100];
    
    printf("Enter the Postfix Expression : ");
    scanf("%s", exp);
    
    evaluateexp(exp);
}

void evaluateexp(char exp[])
{
    int i = 0;
    float num1, num2, value;
    
    while(exp[i] != '\0')
    {
        if(isdigit(exp[i]))
        {
            push(exp[i]);
        }
        else
        {
            num2 = pop();
            num1 = pop();
            
            switch(exp[i])
            {
                case '+':
                    value = num1 + num2;
                    break;
                case '-':
                    value = num1 - num2;
                    break;
                case '*':
                    value = num1 * num2;
                    break;
                case '/':
                    value = num1 / num2;
                    break;
                case '%':
                    value = (int)num1 % (int)num2;
                    break;
            }
            
            push(value);
            
        }
        
        i++;
    }
    
    printf("\n The Value of Postfix Expression is : %.2f", pop());
}


void push(float val)
{
    if (top == Length-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

float pop()
{
    
    float val;
    if (top == -1)
    {
        printf("\n STACK UNDERFLOW");
    }
    else
    {
        val = stack[top];
        top--;
    }
    
    return val;
}
