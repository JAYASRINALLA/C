#include<stdio.h>
void bank_transaction(int bal_amount,int amount_send);
int main()
{
    int bal_amount;
    int amount_send;
    printf("enter the balance amount");
    scanf("%d",&bal_amount);
    printf("enter the transaction amount");
    scanf("%d",&amount_send);
    bank_transaction(bal_amount,amount_send);
    return 0;
}
void bank_transaction(int bal_amount,int amount_send)
{
    if(bal_amount>=amount_send)
    {
        if(amount_send>1000)
        {
            printf("\n required additional verification");
        }
        else
        {
            printf("\n required additional verification");
        }
    }
    else
    {
        printf("\n insufficient funds");
    }
}
