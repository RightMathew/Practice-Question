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
        printf("Select the Options : \n1.Cast Vote \n2.Results \n99. Exit\n");
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
    printf("Select Your Area : \n1. Area--1\t2. Area--2\t3. Main Menu");
    scanf("%d", &ch);
        
}


