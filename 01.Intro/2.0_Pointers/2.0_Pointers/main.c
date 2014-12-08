//
//  main.c
//  2.0_Pointers
//
//  Created by Martin Kotrulev on 12/8/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>

void goSouthEast (int *latitude, int *longitude) {
    
    *latitude = *latitude - 1;
    *longitude = *longitude + 1;
}

int main() {
    int latitude = 10;
    int longitude = 15;
    
    printf("Possition before: %d, %d\n", latitude, longitude);
    /* Passing by refference using the adress of the variables*/
    goSouthEast(&latitude, &longitude);
    
    printf("Current possition: %d, %d\n", latitude, longitude);
    
    return 0;
}
