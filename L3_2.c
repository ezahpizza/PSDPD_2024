#include <stdio.h>

const double TAX_RATE = 0.03625;

int main () {
    int n;
    double total_payroll, avg_salary;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int emp_id;
        double wage_rate;
        double hours_worked;

        printf("Enter employee ID: ");
        scanf("%d", &emp_id);
        printf("Enter wage rate: ");
        scanf("%lf", &wage_rate);
        printf("Enter hours worked: ");
        scanf("%lf", &hours_worked);

        double gross_pay = wage_rate * hours_worked;
        if(hours_worked > 40) 
            gross_pay = (hours_worked - 40) * wage_rate * 1.5;
        double tax = gross_pay * TAX_RATE;
        double net_pay = gross_pay - tax;
        total_payroll += net_pay;

        printf("Employee ID: %d\n", emp_id);
        printf("Gross Pay: $%.2f\n", gross_pay);
        printf("Tax: $%.2f\n", tax);
        printf("Net Pay: $%.2f\n", net_pay);
    }

    avg_salary = total_payroll / n;

    printf("Total Payroll: $%.2f\n", total_payroll);
    printf("Average salary paid: $%.2f\n", avg_salary);

    return 0;
}
