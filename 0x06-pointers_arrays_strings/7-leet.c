#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *str) {
    int i, j;
    char c;
    char leet_map[256] = {0};
    
    leet_map['a'] = leet_map['A'] = '4';
    leet_map['e'] = leet_map['E'] = '3';
    leet_map['o'] = leet_map['O'] = '0';
    leet_map['t'] = leet_map['T'] = '7';
    leet_map['l'] = leet_map['L'] = '1';
    
    for (i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (leet_map[c]) {
            str[i] = leet_map[c];
        }
    }
    
    return (n);
}
