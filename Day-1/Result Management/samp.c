#include<stdio.h>
#include<string.h>
#define Length 20

struct student{
    
    int roll_no;
    char student_name[Length];
    struct student *marks;
    
};

struct student arr[Length];

struct marks{
    
    int c;
    int cpp;
    int java;
};


void initialize();
void admin();
int login();
void add_student();


char user[Length] = "admin";
char pass[Length] = "pass";

int main()
{
    initialize();
    
    return 0;
}

void initialize()
{
    int ch;
    
    do
    {
        printf("\n\n ***** RESULT MANAGEMENT ***** ");
        printf("\n 1. Admin ");
        printf("\n 2. Result");
        printf("\n 3. Exit");
        printf("\n Enter Option : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
            {
                admin();
                break;
            }
            case 2 :
            {
                
                break;
            }
            case 3 :
            {
                printf("\n Thank You");
                break;
            }
            default :
            {
                printf("\n Invalid Input");
            }
        }
        
    }while(ch != 3);
}

void admin()
{
    int flag = login();
    
    if (flag == 1)
    {
        int ch;
        do
        {
            printf("\n\n ***** ADMIN *****");
            printf("\n 1. Add Student");
            printf("\n 2. Student List");
            printf("\n 3. Update Student");
            printf("\n 4. Delete Student");
            printf("\n 5. Exit");
            switch(ch)
            {
                case 1 :
                {
                    add_student();
                }
                case 5:
                {
                    printf("\n Returning Main");
                    break;
                }
                default :
                {
                    printf("\n Invalid Input");
                }
                
                
            }
        }while(ch != 5);
    }
}

int login()
{
    char u[Length], p[Length], flag = 0;
    
    printf("\n Enter User Name : ");
    scanf("%s", u);
    
    printf("\n Enter Password : ");
    scanf("%s", p);
    
    if (strcmp(u,user)==0)
    {
        if (strcmp(p, pass)==0)
        {
            printf("\n Login Success.");
            flag = 1;
        }
        else
        {
            printf("\n Login Password Wrong.");
        }
    }
    else
    {
        printf("\n Login Username Invalid");
    }
    
    return flag;
}


void add_student()
{
    int n;
    
    printf("\n Enter the Number of Students to be added : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter Details of Student %d", i+1);
        printf("Enter Student roll_no : ");
        scanf("%d", &arr[i].roll_no);
        printf("Enter Student Name : ");
        scanf("%s", arr[i].student_name);
        printf("\n\n -----Enter Marks-----");
        printf("\n Enter C Marks : ");
        scanf("%d", arr[i].marks->c);
        
    }
}
