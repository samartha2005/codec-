#include <stdio.h>

// Structure to represent a bank account
struct BankAccount {
    int accountNumber;
    char name[50];
    double balance;
};

// Function to create a new bank account
void createAccount(struct BankAccount accounts[], int *accountCount) {
    if (*accountCount < 10) {
        struct BankAccount account;
        printf("Enter the account number: ");
        scanf("%d", &account.accountNumber);
        printf("Enter the account holder's name: ");
        scanf("%s", account.name);
        printf("Enter the initial balance: ");
        scanf("%lf", &account.balance);

        accounts[*accountCount] = account;
        (*accountCount)++;

        printf("Account created successfully.\n");
    } else {
        printf("Maximum account limit reached.\n");
    }
}

// Function to deposit money into an account
void deposit(struct BankAccount accounts[], int accountCount) {
    int accountNumber;
    double amount;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);
    printf("Enter the amount to deposit: ");
    scanf("%lf", &amount);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            accounts[i].balance += amount;
            printf("Amount deposited successfully.\n");
            return;
        }
    }

    printf("Account not found.\n");
}

// Function to withdraw money from an account
void withdraw(struct BankAccount accounts[], int accountCount) {
    int accountNumber;
    double amount;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);
    printf("Enter the amount to withdraw: ");
    scanf("%lf", &amount);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully.\n");
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }

    printf("Account not found.\n");
}

// Function to view account details
void viewAccountDetails(struct BankAccount accounts[], int accountCount) {
    int accountNumber;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Account Holder: %s\n", accounts[i].name);
            printf("Account Balance: %.2lf\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

int main() {
    struct BankAccount accounts[10];  // Array to store up to 10 accounts
    int accountCount = 0;             // Variable to keep track of the number of accounts

    int choice;

    do {
        printf("\nBank Management System Menu:\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. View Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accounts, &accountCount);
                break;
            case 2:
                deposit(accounts, accountCount);
                break;
            case 3:
                withdraw(accounts, accountCount);
                break;
            case 4:
                viewAccountDetails(accounts, accountCount);
                break;
            case 5:
                printf("Thank you for using the bank management system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }


    } while (choice != 5);

    return 0;
}

