#include <stdio.h>

int addrec(int n);
int addrecsingle(int n);

int main() {

    int val;
    
    printf("Enter the Number : ");
    scanf("%d", &val);
    
    printf("%d", addrec(val));
    
    return 0;
}

int addrec(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + addrec(n / 10));
    
}
