#include <stdio.h>

int main() {
    int num_customers;
    scanf("%d", &num_customers);

    double total_earnings = 0.0;

    for (int i = 1; i <= num_customers; i++) {
        int num_fruits;
        scanf("%d", &num_fruits);

        double customer_bill = 0.0;
        for (int j = 0; j < num_fruits; j++) {
            double price;
            scanf("%lf", &price);
            customer_bill += price;
        }

        printf("Total bill for Customer %d: $%.1f\n", i, customer_bill);
        total_earnings += customer_bill;
    }

    printf("Total earnings for the day: $%.1f", total_earnings);
    return 0;
}