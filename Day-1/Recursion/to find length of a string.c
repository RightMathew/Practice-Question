#include<stdio.h>

int len(char str[]);
int n = 0;
int main()
{
    char str[50];
    
    printf("Enter a string : ");
    scanf("%s", str);
    
    int l = len(str);
    printf("The length of String %s is : %d ", str, l);
    
    return 0;
}

int len(char str[]){
    
    
    if (str[n] == '\0')
        return n;
    else
        n++;
    len(str); 
    
