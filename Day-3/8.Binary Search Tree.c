#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct node {
    
    int data;
    struct node *left;
    struct node *right;
}Node;


Node *create(int num);
void insert(Node *,Node *);
void preorder(Node *);
void initalize();
void ent_num();

void (*i)();


Node *root = NULL;

int main()
{
    i = initalize;
    i();
    
    return 0;
}

void initalize()
{
    int ch;
    
    do {
        printf("\n *****Main Menu*****");
        printf("\n 1. Enter Number");
        printf("\n 2. Preorder");
        printf("\n 3. Exit");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1 :
                ent_num();
                break;
            case 2 :
                preorder(root);
                break;
            case 3 : 
                printf("\n Thank You");
                break;
            default :
                printf("\n Invalid Input");
        }
    }while(ch != 3);
    
}

void ent_num()
{
    int num;
    Node *temp;
    
    printf("\n Enter the Number to insert into tree (-1 to Exit): ");
    scanf("\%d", &num);
    
    while(num != -1)
    {
        temp = create(num);
        
        if (root == NULL)
        {
            
            root = temp;
        }
        else
        {
            insert(root, temp);
        }
        
        printf("\n Enter the Number to insert into tree (-1 to Exit): ");
        scanf("%d", &num);
    }
    
}


Node *create(int num)
{
    
    Node *tem;
  
    tem = (Node *) malloc (sizeof (Node));
  
    tem->data = num;
  
    tem->left = tem->right = NULL;
  
    return tem;
}



void insert(Node *root,Node *temp)
{   
    if(temp->data < root->data)
    {
        if(root->left != NULL)
        {
            insert(root->left,temp);
        }
        else
        {
            root->left = temp;
        }
    }
    
    
    if(temp->data > root->data)
    {
        if(root->right != NULL)
        {
            insert(root->right, temp);
        }
        else
        {
            root->right = temp;
        }
    }
}
 
 
void preorder(Node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
