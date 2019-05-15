/*******************************************************************************
 * 48430 Fundamentals of C Programming - Assignment 3
 * Name: Abigail Saadeh
 * Student ID: 12789451
 * Date of submission: 
 * A brief statement on what you could achieve (less than 50 words):
 * 
 * 
 * A brief statement on what you could NOT achieve (less than 50 words):
 * 
 * 
*******************************************************************************/

/*******************************************************************************
 * List header files
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "A3.h"



/*******************************************************************************
 * Main
*******************************************************************************/
int main(void)
{
    

    print_home();
    print_menu();
    read_user_input();
    return 0;
}

void print_home (void)
{
    printf("\n"
    "1. Sign Up\n"
    "2. Log In\n"
    "Enter Choice\n");

}

void read_home (void)
{
    FILE * userDatabaseP;
    
    int choice; 
    scanf("%d", &choice);

    if(choice == "1"){
        sign_up();
    }
    if(choice == "2"){
        log_in();
    }
}

void sign_up (void)
{
    user_t newUser;
    
    
}

void log_in (void)
{

}

/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * 
 * Author: Abigail
*******************************************************************************/
void print_menu (void)
{
    printf("\n"
    "1. Create New Account\n"
    "2. Make a Deposit\n"
    "3. Withdraw\n"
    "4. Review Account\n"
    "5. Transaction History\n"
    "6. Transfer Between Accounts\n"
    "7. Update Pin\n"
    "8. Sign Out\n"
    "Enter choice (number between 1-8)>\n");
}

/*******************************************************************************
 * This function reads in the user input and calls the appropriate function
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Abigail
*******************************************************************************/
void read_user_input(void)
{
    if (input == 1){
        create_new_account();
    }

    if(input == 2){
		make_deposit();
	}

	if(input == 3){
	    withdraw();
	}

    if(input == 4){
        review_account();
	}

    if (input == 5){
       transaction_history();
    }

    if (input == 6){
       transfer_between_accounts();
    }

    if (input == 7){
       update_pin()
    }

    if (input == 8){
       sign_out();
    }

    main();
}

/*******************************************************************************
 * This function will create a new account 
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Abigail
*******************************************************************************/
void create_new_account (void)
{
     printf("Please confirm you would like to create a new account.\nType 'Y' for yes\n");
     char confirmationResponse;
     scanf("%d", &confirmationResponse);

     account_t newAccount; 

     if(confirmationResponse == 'Y'){

         printf("What would you like to name your new account?\n");
         scanf("%s", &newAccount.account_name);


     }
]
     
} 
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Uha
*******************************************************************************/
void make_deposit (void)
{
     printf("making a deposit\n");
} 
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Abigail
*******************************************************************************/
void withdraw (void)
{
     printf("withdrawing\n");
}
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Uha
*******************************************************************************/
void review_account (void)
{
     printf("reviewing account\n");
} 
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Richard
*******************************************************************************/
void transaction_history (void)
{
     printf("viewing transaction history\n");
} 
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Richard
*******************************************************************************/
void transfer_between_accounts (void)
{
     printf("transferring between accounts\n");
} 
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Trent
*******************************************************************************/
void update_pin (void)
{
     printf("updating pin\n");
} 
/*******************************************************************************
 * This function prints the initial menu with all instructions on how to use
 * this program.
 * inputs:
 * - none
 * outputs:
 * - none
 * Author: Trent
*******************************************************************************/
void sign_out (void)
{
    exit(0);
} 