/* Checkbook menu */
/* 0 - Clear account balance
 * 1 - Credit money to account
 * 2 - Debit money from account
 * 3 - Display current balance
 * 4 - Exit the program
 */

#include <stdio.h>

int main(void) {
  float balance = 0.0f, credit, debit;
  int command;

  printf("*** ACME Checkbook Balancing program ***\n");
  printf("Commands: \n");
  printf("0 - Clear account balance\n");
  printf("1 - Credit money to account\n");
  printf("2 - Debit money from account\n");
  printf("3 - Display current balance\n");
  printf("4 - Exit the program\n");

  for (;;) {
    printf("Enter command: ");
    scanf("%d", &command);

    switch (command) {
    case 0:
      balance = 0.0f;
      printf("Account cleared\n");
      break;
    case 1:
      printf("Enter amount of credit: ");
      scanf("%f", &credit);
      balance += credit;
      credit = 0;
      break;
    case 2:
      printf("Enter amount of debit: ");
      scanf("%f", &debit);
      balance -= debit;
      debit = 0;
      break;
    case 3:
      printf("Current Balance: $%.2f\n", balance);
      break;
    case 4:
      printf("Exiting ...\n");
      return 0;
    default:
      printf("Commands: \n");
      printf("0 - Clear account balance\n");
      printf("1 - Credit money to account\n");
      printf("2 - Debit money from account\n");
      printf("3 - Display current balance\n");
      printf("4 - Exit the program\n");
      break;
    }
  }

  return 0;
}
