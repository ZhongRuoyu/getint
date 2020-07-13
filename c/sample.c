/* Copyright (c) 2020 Zhong Ruoyu 
 * A sample C program for getint function */

#include <stdio.h>
#include "cgetint.h"

int main(void) {
    int value, error;
    printf("Please input some integer to be fetched by getint: ");
    value = cgetint(&error);
    printf("getint returns %d", value);
    printf(" with error code %d.\n", error);
    return 0;
}