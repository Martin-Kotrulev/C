//
//  main.c
//  1.3_Cards
//
//  Created by Martin Kotrulev on 12/8/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    int val, count;
    
    count = 0;
    while (card_name[0] != 'X') {
        puts("Enter the card_name");
        scanf("%2s", card_name);
        
        val = 0;
        switch (card_name[0]) {
            case 'Q':
            case 'K':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                return 0;
            default:
                val = atoi(card_name);
                if (val < 1 || val > 10) {
                    puts("The value of the card must be in the range 1-10!");
                    continue;
                }
        }
    
        /* check if the value is 3 to 6 */
        if (val >= 3 && val <= 6)
            count++;
        /* otherwise check if it is 10, J, Q or K*/
        else if (val == 10)
            count--;
        printf("Current count: %d\n", count);
    }
    return 0;
}
