#include <stdio.h>
#include <string.h>


int main()
{
    char string[20];
    int n;
    
    printf("Enter a string: ");
    scanf("%s", string);
    
    n = strlen(string);
    permutation(string, 0, n-1);
    
    return 0;
}

void permutation(char *a, int l, int r)
{
   int i;
  
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permutation(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}



void swap(char *x, char *y)
{
    char temp;
    printf("%c %c\n", x,y);
    temp = *x;
    *x = *y;
    *y = temp;
}
