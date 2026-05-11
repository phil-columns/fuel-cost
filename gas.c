// fuel cost calculator

#include <stdio.h>
#include <stdbool.h>

bool carCheck(char carprompt){

    if(carprompt == 'y'){
	return true; 	    
    }
    else if(carprompt == 'n'){
	return false;
    }
}

int main() {

    int distance = 0;
    float gasprice = 0.0;
    char carprompt = 0;
    float total = 0; 

    printf("Fuel Cost Calculator\n");
    printf("how far are you driving?: ");
    scanf("%d", &distance);
    printf("how much is gas?: ");
    scanf("%f", &gasprice);

    total = distance * gasprice * .05;

    printf("Are you driving a 2022 Toyota Tacoma? (y or n): ");
    scanf("%s", &carprompt);
       
        if(carCheck(carprompt)) {
	    printf("your trip will cost %.2f dollars.\n", total);
        }
	else {
	    printf("Sorry, your car is not supported");
	}

return 0;

}
