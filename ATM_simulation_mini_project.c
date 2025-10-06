#include <stdio.h>

int main()
{
    int balance = 10000;   // ✅ starting balance
    int deposit, withdraw, choice;

    printf("=== ATM MENU ===\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // ✅ shows the current balance every time
            printf("Your current balance is: %d\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &withdraw);

            // ✅ prevents withdrawing more than balance
            if (withdraw <= balance)
            {
                balance -= withdraw;  // balance updated
                printf("Withdrawal successful!\n");
                printf("New balance: %d\n", balance);
            }
            else
            {
                printf("Insufficient balance!\n");
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &deposit);
            balance += deposit;  // ✅ adds deposit to balance
            printf("Deposit successful!\n");
            printf("New balance: %d\n", balance);
            break;

        case 4:
            printf("Exiting... Thank you for using our ATM!\n");
            break;

        default:
            printf("Invalid choice! Please select between 1 to 4.\n");
            break;
        }
    } while (choice != 4);  // ✅ loop runs until user chooses Exit

    return 0;
}
