//
//  main.c
//  3.1_ReverseStringWithPointerArithmetic
//
//  Created by Martin Kotrulev on 12/10/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString (char *s) {
    
    size_t len = strlen(s);
    char *current = s + len - 1;
    
    while (current >= s) {
        printf("%c", *current);
        current = current - 1;
    }
    puts("");
}

int main() {
    
    /* Using array of pointers for array of strings*/
    char *juices[] = {
        "dragonfruit", "waterberry", "sharonfruit", "uglifruit",
        "rumberry", "kiwifruit", "mulberry", "strawberry",
        "blueberry", "blackberry", "starfruit",
    };
    
    int i = 0;
    while (i < 11) {
        reverseString(juices[i]);
        i++;
    }
    
    return 0;
}
