/*A bank ATM must follow strict safty rules to avoid fraud and
 ensure customers maintain a minimum balance.a customer inserts the card,
 checks their balance,and request a withdrawal.
 The ATM must either approve the request and update the balance
 or reject it and show the correct reason.
 
 Rules:
 withdrawal ammount must be a multiple of Rs.100
 Maximum withdrawal per transaction is Rs.25000
 After withdrwal balance must remain atleast Rs.1000
  
 Input:
 current balance(integer)
 requested witdrwal ammount(integer)

 Validations:
 If balance < 0 or withdraw Ammount <=0 invalid input

 Expected Output:
 if successful:
 Transction Successful.
 Remaining Balance: Rs.<newBalance>

 if Failed:
 Transaction failed:<Reason>
*/
#include<stdio.h>

int main()
{
    int CurrentBalance = 0;
    int WithdrwalAmount = 0;
    int RemainingBalance = 0;

    printf("Enter Current balance:");
    scanf("%d",&CurrentBalance);

    printf("Enter withdraw ammount: ");
    scanf("%d",&WithdrwalAmount );

    if(CurrentBalance < 0 || WithdrwalAmount <= 0)
    {
        printf("Invalid ammount\n");
    }
    else if(WithdrwalAmount % 100 != 0)
    {
        printf("Transaction failed: Amount must be a multiple of Rs.100\n");
    }
    else if(WithdrwalAmount > 25000)
    {
        printf("Transaction failed: Maximum withdrawal limit is Rs.25000\n");
    }
    
    else
    {
        RemainingBalance = (CurrentBalance - WithdrwalAmount);
        if(RemainingBalance < 1000)
        {
            printf("Transaction failed: Minimum balance is Rs.1000 must be maintained\n");

        }
        else
        {
            printf("Transaction Suceessful.\n");
            printf("Remaning balance: Rs.%d\n", RemainingBalance);
        }

        return 0;
    }
}


