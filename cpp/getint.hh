/* Copyright (c) 2020 Zhong Ruoyu */

#include <cstdio>

int getint(int *errCode = NULL) {
    if (errCode != NULL) *errCode = 0;
    int c = getchar(); // Temporarily stores next character from stdin
    int sign = 1;
    int absResult = 0;

    while ((c == '\t') || (c == '\v') || (c == '\f') || (c == '\r') || (c == ' ')) c = getchar();
    // Consumes all whitespaces at the front

    while ((c == '-') || (c == '+')) {
        if (c == '-') sign *= -1;
        c = getchar();
    } // Sign check

    if ((c < '0') || (c > '9')) {
        if (errCode != NULL) *errCode = -1; // Invalid input: Not starting with a digit
        fflush(stdin); // Clears stdin
        return 0;
    }

    while ((c >= '0') && (c <= '9')) {
        absResult = absResult * 10 + (c - '0');
        c = getchar();
    }
    // Main

    if (c == '\n') return (sign * absResult); // Success

    while ((c == '\t') || (c == '\v') || (c == '\f') || (c == '\r') || (c == ' ')) c = getchar();
    // Consumes all whitespaces at the end

    if (c == '\n') return (sign * absResult); // Success

    fflush(stdin); // Clears stdin
    if (errCode != NULL) *errCode = -2; // Invalid input: Not ending with a digit
    return 0;
}
