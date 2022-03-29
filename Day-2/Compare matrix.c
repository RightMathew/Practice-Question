#include<stdio.h>

#define Length 100

void initialize();
void print(int arr[Length][Length], int row, int col);



void (*i)();
void (*p)(int*, int, int);
void compare(int arr1[Length][Length],int arr2[Length][Length], int r1,int c1,int r2,int c2);

int main()
{
    
    i = initialize;
    i();
    
    return 0;
}


void initialize()
{
    
    int mat1[Length][Length], mat2[Length][Length];
    int row1, col1, row2, col2;
    
    printf("\nEnter the Order For Matrix 1 : ");
    scanf("%d %d", &row1, &col1);
    
    printf("Enter the Elements for %d row and %d Column for Matrix 1.\n", row1, col1);
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\nEnter the Order For Matrix 2 : ");
    scanf("%d %d", &row2, &col2);
    
    printf("Enter the Elements for %d row and %d Column for Matrix 2.\n", row2, col2);
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("\nMatrix 1 : \n");
    print(mat1, row1, col1);
    
    printf("\nMatrix 2 : \n");
    print(mat2, row2, col2);
    
    compare(mat1, mat2, row1, col1, row2, col2);
    
}

void print(int arr[Length][Length],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}

void compare(int arr1[Length][Length],int arr2[Length][Length], int r1,int c1,int r2,int c2)
{
   
   int flag = 0;
   
   if (r1 == r2 && c1 == c2){
       
       printf("\nBoth Matrix are of same order .");
       for(int i = 0; i < r1; i++)
       {
           for (int j = 0; j < c1; j++)
           {
               if (arr1[i][j] != arr2[i][j])
               {
                   flag = 1;
                   break;
               }
           }
       }
   }
   else
   {
       printf("\nMatrix are of different Order.");
      
   }
   
   if (flag == 0){
       printf("\nTwo Matrix are Equal.");
   }
   else{
       printf("\n Two Matrix are not equal.");
   }
    
}
