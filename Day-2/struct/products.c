#include<stdio.h>
#include <stdlib.h>

#define Length 100

void getdetails();
void print(int n);

void (*g)();

struct product
{
    int p_id;
    char p_name[20];
    float p_price;
    char p_expdate[20];
    
};

struct product *arr[Length];

int main()
{
    g = getdetails;
    g();
    
    return 0;
}

void getdetails()
{
    int n;
    
    printf("\n********** WELCOME TO ZOHO STORE ***********");
    printf("\n Enter the Number of products To be added : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = (struct product *)malloc(sizeof(struct product));
        
        printf("\nEnter the Details of the Product : %d", i + 1);
        
        printf("\nEnter Product Id : ");
        scanf("%d", &arr[i]->p_id);
        
        printf("\nEnter Product Name : ");
        scanf("%s", arr[i]->p_name);
        
        printf("\nEnter Product Price : ");
        scanf("%f", &arr[i]->p_price);
        
        printf("\nEnter Product Expiry Date : ");
        scanf("%s", arr[i]->p_expdate);
        
    }
    print(n);
}

void print(int n)
{
    
    printf("\nProduct Details : \n");   
    for(int i = 0; i < n; i++){
        
        printf("Product : %d\n", i + 1);
        printf("\nProduct Id : %d", arr[i]->p_id);
        printf("\nProduct Name : %s", arr[i]->p_name);
        printf("\nProduct Price : %.2f", arr[i]->p_price);
        printf("\nProduct Expiry Date : %s\n", arr[i]->p_expdate);
    }
    
}
