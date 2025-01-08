#include <stdio.h>

void calculate_aclln_time (double takeoff_speed, double distance) {
    double speed = (takeoff_speed * 5.0) / 18;
    double time_taken = (2 * distance) / speed;
    double acceleration = speed / time_taken;

    printf("Time taken to accelerate to takeoff speed: %.2lf seconds\n", time_taken);
    printf("Acceleration required: %.2lf m/s^2\n", acceleration);
}

int main() {
    double takeoff_speed, distance;
    printf("Enter thge takeoff speed in km/h: ");
    scanf("%lf", &takeoff_speed);
    printf("Enter the distance in m: ");
    scanf("%lf", &distance);

    calculate_aclln_time(takeoff_speed, distance);

    return 0;
}