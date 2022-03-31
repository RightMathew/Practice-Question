#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void initalize();


struct node{
    
    int data;
    struct node *next;
    
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *del_list(struct node *);
struct node *search(struct node *);
struct node *insert_aft(struct node *);
struct node *del_node(struct node *);

int main()
{
    initalize();
    
    return 0;
    
}

void initalize(){
    
    int ch;
    
    do {
        
        printf("\n *****MAIN MENU*****");
        printf("\n 1. Create a List");
        printf("\n 2. Display a List");
        printf("\n 3. Add node at the Begining");
        printf("\n 4. Add node at the end");
        printf("\n 5. Add Node after a number");
        printf("\n 6. Delete node at the Begining");
        printf("\n 7. Delete node at the End");
        printf("\n 8. Delete a node");
        printf("\n 9. Delete entire List");
        printf("\n 10. Search a Number");
        printf("\n 11. Exit");
        printf("\n Enter option : ");
        scanf("%d", &ch);
        switch(ch){
            
            case 1:
            {
                start = create_ll(start);
                break;
            }
            case 2:
            {
                
                start = display(start);
                break;
            }
            case 3:
            {
                start = insert_beg(start);
                break;
            }
            case 4:
            {
                start = insert_end(start);
                break;
            }
            case 5:
            {
                start = insert_aft(start);
                break;
            }
            case 6:
            {
                start = delete_beg(start);
                break;
            }
            case 7:
            {
                start = delete_end(start);
                break;
            }
            case 8:
            {
                start = del_node(start);
                break;
            }
            case 9:
            {
                start = del_list(start);
                break;
            }
            case 10:
            {
                start = search(start);
                break;
            }
            case 11:
            {
                printf("Thank You");
                break;
            }
            default:
            {
                printf("Invalid Input");
                break;
            }
        }
    }while(ch != 11);
    
}

struct node *create_ll(struct node *start)
{
    
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter the data to be added (-1 to exit) : ");
    scanf("%d", &num);
    
    while(num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node-> data = num;
        if(start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
            
        }
        
        printf("\n Enter the data to be added (-1 to exit) : ");
        scanf("%d", &num);
        
    }
    
    return start;
}

struct node *display(struct node *start)
{
        
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        
        printf("\t %d", ptr -> data);
        ptr = ptr -> next;
    }
    
    return start;
}

struct node *insert_beg(struct node *start)
{
    
    struct node *new_node;
    int num;
    
    printf("\n Enter the number to be added in beg : ");
    scanf("%d", &num);
    
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
    
    printf("\n The node is Inserted at the Begining.");
}

struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    
    printf("\n Enter the number to be added in the end : ");
    scanf("%d", &num);
    
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;
    
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    ptr -> next = new_node;
    
    printf("\n The node is Inserted at the end.");
    return start;
}

struct node *delete_beg(struct node *start)
{
    
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    
    return start;
    
}

struct node *delete_end(struct node *start)
{
    
    struct node *ptr, *preptr;
    ptr = start;
    
    while(ptr -> next != NULL)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    
    preptr->next = NULL;
    free(ptr);
    
    return start;
    
}

struct node *del_list(struct node *start)
{
    
    struct node *ptr;
    
    if(start != NULL){
        ptr = start;
        
        while(ptr != NULL)
        {
            start = delete_beg(ptr);
            ptr = start;
            
        }
        
    }
    else{
        printf("\n The list is empyt. ");
    }
    
    return start;
}

struct node *search(struct node *start)
{
    
    struct node *ptr;
    int num, cnt = 1;
    
    printf("\n Enter The number to be searched : ");
    scanf("%d", &num);
    
    ptr = start;
    if(ptr-> next == NULL && ptr->data != num){
        
        printf("\n Not Found");
    }
    
    while (ptr->next != NULL)
    {
        if (ptr->data == num)
        {
            printf("\n Number Found in pos %d", cnt);
            break;
        }
        
        ptr = ptr->next;
        
        cnt++;
    }
    
    return start;
}

struct node *insert_aft(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    
    display(start);
    
    printf("\n Enter the Number : ");
    scanf("%d", &num);
    
    printf("\n Enter the Value after which the Number to be inserted : ");
    scanf("%d", &val);
    
    
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    
    ptr = start;
    preptr = ptr;
    
    while(preptr -> data != val)
    {
        
        preptr = ptr;
        ptr = ptr -> next;
        
    }
    
    preptr-> next = new_node;
    new_node->next = ptr;
    
    display(start);
    
    return start;
}

struct node *del_node(struct node *start)
{
    
    struct node *ptr, *preptr;
    int val;
    
    display(start);
    
    printf("\n Enter the Value of node which has to be deleted : ");
    scanf("%d", &val);
    
    ptr = start;
    
    if (ptr -> data == val)
    {
        
        start = delete_beg(start);
        return start;
    }
    else
    {
        
        while(ptr -> data != val)
        {
            
            preptr = ptr;
            ptr = ptr -> next;
        }
        
        preptr -> next = ptr -> next;
        free(ptr);
        display(start);
        return start;
    }
    
    
}
