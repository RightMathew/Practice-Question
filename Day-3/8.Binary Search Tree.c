#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct node {
    
    int data;
    struct node *left;
    struct node *right;
}Node;


Node *create();
void insert(Node *,Node *);
void preorder(Node *);
void initalize();

void (*i)();

int main()
{
    i = initalize;
    i();
    
    return 0;
}

void initalize()
{
    
    char ch;
    Node *root = NULL, *temp;
    
    do {
        
        temp = create();
        if (root==NULL)
        {
            root = temp;
        }
        else
        {
            insert(root, temp);
        }
        
        printf("\n Do you want to enter more(y/n)?");
        getchar();
        scanf("%c",&ch);
    }  
    while(ch=='y'|ch=='Y');
        
    printf("nPreorder Traversal: ");
        
    preorder(root);
    
}

Node *create()
{
    
    Node *temp;
    
    printf ("\n Enter the Number to Create the root node : ");
  
    temp = (Node *) malloc (sizeof (Node));
  
    scanf ("%d", &temp->data);
  
    temp->left = temp->right = NULL;
  
    return temp;
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
