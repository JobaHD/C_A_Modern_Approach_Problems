#include <stdio.h>

int main(void) {
    float loanAmount,
          interestRate,
          monthlyInterestRate,
          monthlyPay;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    monthlyInterestRate = interestRate / 100.0f / 12.0f;

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPay);

    loanAmount = loanAmount * (1 + monthlyInterestRate);
    loanAmount = loanAmount - monthlyPay;
    printf("Balance remaining after first payment: %.2f\n", (loanAmount));

    loanAmount = loanAmount * (1 + monthlyInterestRate);
    loanAmount = loanAmount - monthlyPay;
    printf("Balance remaining after second payment: %.2f\n", (loanAmount));

    loanAmount = loanAmount * (1 + monthlyInterestRate);
    loanAmount = loanAmount - monthlyPay;
    printf("Balance remaining after third payment: %.2f\n", (loanAmount));

    return 0;
}
