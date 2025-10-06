#include <stdio.h>

int main()
{
int balance;
int deposite;
int withdraw;
int choice;
int newbalance;
printf("===ATM MENU===\n");
printf("1. check balance\n");
printf("2.withdraw money\n");
printf("3. deposite money\n");
printf("4. exit\n");
balance = 10000;
do
{ printf("enter your choice:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("your current balance is 10000\n");
    
        break;
    case 2:
    printf("how much do you want to withdraw:\n");
    scanf("%d",&withdraw);
    printf("your withdrawl is succesfull\n");
    newbalance = balance-withdraw;
    printf("the new balance after withdrawl:%d\n",newbalance);
    break;

    case 3:
    printf("enter your deposite amount:\n");
    scanf("%d",&deposite);
    printf("your deposition is succeesfull\n");
    newbalance = balance+deposite;
    printf("the new balance is:%d\n",newbalance);
        break;

    case 4:
    printf("exting.........thankyou \n");
    break;
    default:
        break;
    }
}
 while(choice != 4);
 return 0;

 
}
