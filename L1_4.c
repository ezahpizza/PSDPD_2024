#include <stdio.h>
#include <math.h>

void calculate_monthly_payments (double principal, double interest_rate, double payments_num) {
    double monthly_payment = (interest_rate * principal) / (1 - pow((1 + interest_rate), -1 * payments_num));
    printf("The monthly installment is: $%.2f\n", monthly_payment);
}

int main () {
    double purchase_price, down_payment, interest_rate, payments_num;
    printf("Enter the purchase price: ");
    scanf("%lf", &purchase_price);
    printf("Enter the down payment: ");
    scanf("%lf", &down_payment);
    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter the number of payments: ");
    scanf("%lf", &payments_num);

    double principal = purchase_price - down_payment;
    calculate_monthly_payments (principal, interest_rate, payments_num);

    return 0;
}