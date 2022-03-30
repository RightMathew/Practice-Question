#include<stdio.h>
#include<string.h>
struct library{
    
    char bookname[50];
    char author[50];
    int noofpages;
    float price;
};

struct student{
    
    int s_id;
    char s_name[30];
    
};

struct student stud[100];
stud[0] = (struct student *)malloc(sizeof(struct student));
stud[0]->s_id = 100;
stud[0]->s_name = "mat";

int main()
{
    int ch;
    
    do {
        
        printf("\nLibrary");
        printf("\n1. Add Books");
        printf("\n2. Display Books");
        printf("\n3. Display Taken Books");
        printf("\n4. Add Student");
        printf("\n5. Display Student");
        printf("\n6. Exit\n");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1:
            {
                
                break;
            }
            case 2:
            {
                
                break;
            }
            case 3:
            {
                
                break;
            }
            case 4:
            {
                add_student();
                break;
            }
            case 5:
            {
                
                break;
            }
            case 6:
            {
                printf("Thank you");
                break;
            }
            default :
            {
                printf("Invalid Input");
            }
        }
    }while(ch != 6);
    
    return 0;
}

void add_student()
{
    
}
