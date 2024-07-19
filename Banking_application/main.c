#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int j;
struct BANK
{
    unsigned int Acc_no;
    char name[25];
    int balance;
};

typedef struct BANK bank;

void display(bank s)
{
    printf("ACCOUNT DETAILS \n");
    printf("ACC no: %d \n", s.Acc_no);
    printf("NAME: %s \n", s.name);
    printf("BALANCE: %d \n", s.balance);
}
void getdetails(bank *a)
{
    //accessing members using point to an object, using the -> operator
    //pointer->member
    printf("Enter details \n");
    printf("Acc no:");
    scanf("%d", &(a->Acc_no));
    printf("Name:");
    scanf("%s", a->name);
    printf("Balance:");
    scanf("%d", &(a->balance));
}
void Add_money(bank *x)
{
    int add;
    printf("Enter the amount to be credited: \n");
    scanf("%d", &add);
    x->balance += add;
    //display(A[1]);
}
void withdraw(bank *y)
{
    int sub;
    printf("Enter the amount to be debited: \n");
    scanf("%d", &sub);
    y->balance -= sub;

}


int main()
{
    bank A[5];
    //getdetails(&A[1]);

    while(true)
    {
        int ch,y;
        printf("Enter a choice(1--5):");
        scanf("%d", &ch);
        if(ch == 1)
        {
            getdetails(&A[1]);
            display(A[1]);
            printf("Enter 1 --> add or 2 -->withdraw:");
            scanf("%d", &y);
            if (y == 1)
                Add_money(&A[1]);
            else
                withdraw(&A[1]);
            display(A[1]);

        }
        else if(ch == 2)
        {
            getdetails(&A[2]);
            display(A[2]);
            printf("Enter 1 --> add or 2 -->withdraw:");
            scanf("%d", &y);
            if (y == 1)
                Add_money(&A[2]);
            else
                withdraw(&A[2]);
            display(A[2]);
        }
        else if(ch == 3)
        {
            getdetails(&A[3]);
            display(A[3]);
            printf("Enter 1 --> add or 2 -->withdraw:");
            scanf("%d", &y);
            if (y == 1)
                Add_money(&A[3]);
            else
                withdraw(&A[3]);
            display(A[3]);

        }
        else if(ch == 4)
        {
            getdetails(&A[4]);
            display(A[4]);
            printf("Enter 1 --> add or 2 -->withdraw:");
            scanf("%d", &y);
            if (y == 1)
                Add_money(&A[4]);
            else
                withdraw(&A[4]);
            display(A[4]);

        }
        else if(ch == 5)
        {
            getdetails(&A[5]);
            display(A[5]);
            printf("Enter 1 --> add or 2 -->withdraw:");
            scanf("%d", &y);
            if (y == 1)
                Add_money(&A[5]);
            else
                withdraw(&A[5]);
            display(A[1]);

        }
        else
            break;

    }

    return 0;
}
