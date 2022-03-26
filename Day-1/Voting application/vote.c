#include<stdio.h>

void dashboard();
void castvote();
void voteconfirm(char* str[], int canch, int ch);
void result();
void lock();

int a1ab , a1cd, a2ef, a2gh, a2ij, lockflag;
char* area1str[2] = {"ab","cd"};
char* area2str[3] = {"ef","gh","ij"};


int main()
{
    dashboard();
    return 0;
}


void dashboard()
{
    int chc;
    do{
        printf("*****  Welcome to 2022 Election  *****");
        printf("\n1.Cast Vote \n2.Results \n3.Lock \n99. Exit\n");
        scanf("%d", &chc);
        switch(chc)
        {
            case 1: { 
                castvote();
                break;
            }
            case 2: {
                result();
                break;
            }
            case 3: {
                lock();
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

void lock()
{
    int lc;
    printf("Are You sure want to Lock the Election : (1/0)\n");
    scanf("%d", &lc);
    if (lc == 1)
    {
        lockflag = 1;
        printf("The Election is Successfully Closed.\n");
    }
    else
    {
        lockflag = 0;
        printf("Voting is Open.\n");
    }
}

void castvote()
{
    if (lockflag == 0)
    {
        int ch;
        int canch;
        printf("Select Your Area : \n1. Area--1\t2. Area--2\t3. Main Menu\n");
        scanf("%d", &ch);
        if (ch == 1)
        {   
            
            printf("----- Area - 1 ------\n");
            printf("Select the candidate you like to vote.\n1.ab\n2.cd\n");
            scanf("%d", &canch);
            voteconfirm(area1str, canch, ch);
        }
        if (ch == 2)
        {
            
            printf("----- Area - 2 ------\n");
            printf("Select the candidate you like to vote.\n1.ef\n2.gh\n3.ij\n");
            scanf("%d", &canch);
            voteconfirm(area2str, canch, ch);
        }
    }
    else
        printf("Election Ended. Check Result!!\n");
}
void voteconfirm(char* str[], int canch, int ch)
{
    printf("%s %d %d\n", str[canch-1], canch, ch);
    if (str[canch-1] == "ab"){
        a1ab++;
    }
    else if(str[canch-1] == "cd")
    {
        a1cd++;
    }
    else if(str[canch-1] == "ef")
    {
        a2ef++;
    }
    else if(str[canch-1] == "gh")
    {
        a2gh++;
    }
    else if(str[canch-1] == "ij")
    {
        a2ij++;
    }
}
void result()
{
    int resch;
    if (lockflag == 1)
    {
        printf("Election Results\nSelect The Area : \n");
        printf("1.Area-1\t2.Area-2\t3.Main Menu\n");
        scanf("%d", &resch);
        if (resch == 1)
        {
            
            printf("Party/Candidate %s's vote count : %d\n", area1str[0], a1ab);
            printf("Party/Candidate %s's Vote count : %d\n", area1str[1],a1cd);
            
            if (a1ab > a1cd){
                printf("The Winner is %s\n", area1str[0]);
            }
            else if (a1ab == a1cd){
                printf("Both Party secured same amount of Vote\n");
            }
            else{
                printf("The Winner is %s\n", area1str[1]);
            }
            
            a1ab = a1cd = 0;
            
        }
        else if (resch == 2)
        {
            printf("Party/Candidate %s's vote count : %d\n", area2str[0], a2ef);
            printf("Party/Candidate %s's Vote count : %d\n", area2str[1], a2gh);
            printf("Party/Candidate %s's Vote count : %d\n", area2str[2], a2ij);
            
            if (a2ef > a2gh && a2ef > a2ij)
            {
                printf("The Winner is %s\n", area2str[0]);
            }
            else if (a2gh > a2ij)
            {
                printf("The Winner is %s\n", area2str[1]);
            }
            else if (a2ef == a2gh && a2gh == a2ij)
            {
                printf("All Parties secured same amount of Vote\n");
            }
            else
            {
                printf("The Winner is %s\n", area2str[2]);
            }
            
            a2ef = a2gh = a2ij = 0;
            
        }
        else if (resch == 3)
        {
            printf("Returning Main.\n");
        }
        else
        {
            printf("Invalid Request. Returning Main\n");
        }
    }
    else
    {
        printf("The Election is Still going on.\n");
    }
}
