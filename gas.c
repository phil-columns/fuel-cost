// fuel cost calculator

#include <stdio.h>

    float distance = 0;
    float gasprice = 0.0;
    int car = 0;
    float total = 0; 
    const float ToyotaMileage = 18;
    const float SubaruMileage = 21;
    float UserMileage = 0;

int main() {

    printf("Fuel Cost Calculator\n");
    printf("how many miles are you driving?: ");
    scanf("%f", &distance);
  
    printf("Enter gas price (per gallon): ");
    scanf("%f", &gasprice);

    printf("What kind of car are you driving? (enter number):\n");
    printf("1: 2022 Toyota Tacoma\n");
    printf("2: 2009 Subaru Outback\n");
    printf("Your Selection: ");
    scanf("%d", &car);     

    if(car == 1){
	UserMileage = ToyotaMileage;
    }
    else if(car == 2){
	 UserMileage = SubaruMileage;
    }
    else{
	printf("Error: Invalid input\n");
    }

    total = ((distance / UserMileage) * gasprice);
    printf("Your trip will cost $%.2f\n", total);

return 0;

}
