#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct tank {
    float capacity;
    float fuel_level;
};

struct auto_info {
    char make[50];
    char model[50];
    int odometer_reading;
    struct date manufacture_date;
    struct date purchase_date;
    struct tank gas_tank;
};

void scan_date(struct date *date) {
    printf("Enter day: ");
    scanf("%d", &date->day);
    printf("Enter month: ");
    scanf("%d", &date->month);
    printf("Enter year: ");
    scanf("%d", &date->year);
}

void scan_tank(struct tank *tank) {
    printf("Enter tank capacity (gallons): ");
    scanf("%f", &tank->capacity);
    printf("Enter current fuel level (gallons): ");
    scanf("%f", &tank->fuel_level);
}

void scan_auto(struct auto_info *auto_) {
    printf("Enter make: ");
    scanf("%49s", auto_->make);
    printf("Enter model: ");
    scanf("%49s", auto_->model);
    printf("Enter odometer reading: ");
    scanf("%d", &auto_->odometer_reading);
    printf("Enter manufacture date:\n");
    scan_date(&auto_->manufacture_date);
    printf("Enter purchase date:\n");
    scan_date(&auto_->purchase_date);
    printf("Enter gas tank information:\n");
    scan_tank(&auto_->gas_tank);
}

void print_date(struct date date) {
    printf("%02d/%02d/%04d", date.day, date.month, date.year);
}

void print_tank(struct tank tank) {
    printf("Capacity: %.2f gallons, Fuel level: %.2f gallons", tank.capacity, tank.fuel_level);
}

void print_auto(struct auto_info auto_) {
    printf("Make: %s\n", auto_.make);
    printf("Model: %s\n", auto_.model);
    printf("Odometer reading: %d miles\n", auto_.odometer_reading);
    printf("Manufacture date: ");
    print_date(auto_.manufacture_date);
    printf("\n");
    printf("Purchase date: ");
    print_date(auto_.purchase_date);
    printf("\n");
    printf("Gas tank: ");
    print_tank(auto_.gas_tank);
    printf("\n");
}

int main() {
    struct auto_info my_auto;

    printf("Enter automobile information:\n");
    scan_auto(&my_auto);

    printf("\nAutomobile information:\n");
    print_auto(my_auto);

    return 0;
}
