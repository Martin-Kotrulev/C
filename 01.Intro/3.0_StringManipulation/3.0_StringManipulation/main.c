//
//  main.c
//  3.0_StringManipulation
//
//  Created by Martin Kotrulev on 12/10/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "First track",
    "Second track",
    "Third track",
    "Fourth track",
    "Fifth track",
};

void findTrack(char searchFor[]) {
    
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], searchFor))
            printf("Track %i: %s\n", i, tracks[i]);
    }
}

int main() {
    
    char searchFor[80];
    
    printf("Search for: ");
    fgets(searchFor, 80, stdin);
    
    findTrack(searchFor);
    
    return 0;
}
