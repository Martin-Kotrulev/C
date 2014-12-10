//
//  main.c
//  4.0_StandardInputOutput
//
//  Created by Martin Kotrulev on 12/10/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>

int main() {
    
    float latitude, longitude;
    char info[80];
    int started = 0;
    
    puts("data=[");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info)) {
        if (started)
            printf(",\n");
        else
            started = 1;
        
        if ((latitude < -90) || (latitude > 90)) {
            printf("Invalid latitude %f\n", latitude);
            return 2;
        }
        
        if ((longitude < -180) || (longitude > 180)) {
            fprintf(stderr, "Invalid longitude %f\n", longitude);
            return 2;
        }
        
        fprintf(stderr, "{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");

    return 0;
}
