//
//  main.c
//  4.1_SecretMsg
//
//  Created by Martin Kotrulev on 12/10/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>

int main() {
    
    char word[10];
    
    int i = 0;
    while (scanf("%9s", word) != EOF ) {
        i++;
        
        if (i % 2)
            fprintf(stdout, "%s\n", word);
        else
            fprintf(stderr, "%s\n", word);
    }
    
    return 0;
}
