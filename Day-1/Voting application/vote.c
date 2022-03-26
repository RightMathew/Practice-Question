#include<stdio.h>

void dashboard();
void castvote();

void result();


int main()
{
    dashboard();
    return 0;
}

void dashboard()
{
    int chc;
    do{
        printf("*****Welcome to 2022 Election*****");
        printf("\n1.Cast Vote \n2.Results \n3.Lock \n99. Exit\n");
        scanf("%d", &chc);
        switch(chc)
        {
            case 1: { 
                castvote();
                break;
            }
            case 2: {
                
                break;
            }
            case 3: {
                
                break;
            }
            case 99: {
                printf("Thank You");
                break;
            }
            default : {
                printf("Invalid Option. Choose the Correct option\n");
            }
        }
    }
    while (chc != 99);
    
}

void castvote()
{
    int ch;
    int canch;
    printf("Select Your Area : \n1. Area--1\t2. Area--2\t3. Main Menu\n");
    scanf("%d", &ch);
    if (ch == 1)
    {   
        char* area1str[2] = {"ab","cd"};
        printf("----- Area - 1 ------\n");
        printf("Select the candidate you like to vote.\n1.ab\n2.cd\n");
        scanf("%d", &canch);
        voteconfirm(area1str, canch);
    }
        
}
void voteconfirm(char* area1str[], int canch)
{
    printf("%s %d\n", area1str[canch-1], canch);
}

