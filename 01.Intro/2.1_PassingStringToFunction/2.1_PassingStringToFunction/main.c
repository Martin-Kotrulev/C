//
//  main.c
//  2.1_PassingStringToFunction
//
//  Created by Martin Kotrulev on 12/8/14.
//  Copyright (c) 2014 Martin Kotrulev. All rights reserved.
//

#include <stdio.h>

void fortuneCookie(char msg[]){
    printf("Message: %s\n", msg);
    // sizeof() prints the size of a pointer
    // because of how array is passed by refference
    printf("msg occupies %lu bytes\n", sizeof(msg));
}

int main() {
    char quote[] = "Cookies make you fat";
    fortuneCookie(quote);
    return 0;
}
