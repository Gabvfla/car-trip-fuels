#include <stdio.h>

int main(void) {
//Variable Declaration
int gallon = 5; // Quantity of liters in a gallon
int hours; // Hours variable
int speed; // Speed variable

// Data Input
printf("Enter the Duration of the Trip (in hours): "); // Request message
scanf("%d", &hours);
printf("\nEnter the Average Speed of the car (in Km/h): "); // Request message
scanf("%d", &speed);

// Processing
int count = ((speed*hours)/12)/gallon; // Calculation of required gallons

// Data Output
printf("\nFor a %d-hour trip at a speed of %d Km/h, %d full cans are required.", hours, speed, count);

return 0;
}
