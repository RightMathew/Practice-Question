#include<stdio.h>

void rev(char *a);

int main()
{
    char str[50];
    
    printf("Enter the String to Reverse : ");
    scanf("%s", str);
    printf("The Reversed String : ");
    rev(str);
    
    return 0;
}

void rev(char *a)
{
    if (*a)
    {
        rev(a+1);
        printf("%c", *a);
    }
    
}
