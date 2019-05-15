#ifndef A_3_   /* Include guard */
#define A_3_

/*******************************************************************************
 * List preprocessing directives 
*******************************************************************************/
#define MAX_NAME_LEN 15
#define MAX_ACCOUNT_NAME_LEN 30
#define MAX_NUMBER_ACCOUNTS 3
/*******************************************************************************
 * List structs
*******************************************************************************/

struct account {
    int balance;
    int account_number;
    char account_name[MAX_ACCOUNT_NAME_LEN + 1];
}; typedef struct account account_t;

struct user {
    int user_number;
    char first_name[MAX_NAME_LEN + 1];
    char last_name[MAX_NAME_LEN + 1];
    int pin;
    account accounts[MAX_NUMBER_ACCOUNTS + 1];
}; typedef struct user user_t;

/*******************************************************************************
 * List functions
*******************************************************************************/
void print_home(void);
void sign_up(void);
void log_in(void);
void print_menu (void);
void read_user_input(void);
void create_new_account (void);
void make_deposit (void);
void withdraw (void);
void review_account (void);
void transaction_history (void);
void transfer_between_accounts (void);
void update_pin (void);
void sign_out (void);




#endif // A_3_