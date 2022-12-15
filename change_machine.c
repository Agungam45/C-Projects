#include <cs50.h>
#include <stdio.h>


int main (void)

{
    
    
    float change = get_float("Change Amount: ");

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    while (change > 0) {
    
        if (change >= .25) {
        
            quarters++;
            change -= .25;
        
    }   else if (change >= .10){
        
            dimes++;
            change -= .10;
        
    }   else if (change >= .05) {
        
            nickels++;
            change -= .05;
        
    } else {
        
        pennies++;
        change -= .01;
    }


}

    printf("Quarters: %i\n", quarters);
    printf("Dimes: %i\n", dimes);
    printf("Nickels: %i\n", nickels);
    printf("Pennies: %i\n", pennies);


}

