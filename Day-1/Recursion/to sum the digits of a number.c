#include <stdio.h>

int addrec(int n);
int addrecsingle(int n);

int main() {

    int val;
    int opt;
    
    printf("Enter the Number : ");
    scanf("%d", &val);
    
    printf("Select One Option : \n 1.Series of Number \t2.Single Number : ");
    scanf("%d", &opt);
    
    if (opt == 1)
        printf("%d", addrec(val));
    else if (opt == 2)
        printf("%d", addrecsingle(val));
    else
        printf("Invalid Input");
    
    return 0;
}

int addrec(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + addrec(n / 10));
    
}

int addrecsingle(int n)
{
    if (n == 0)
        return n;
    else
        return (n + addrecsingle(n-1));
}
