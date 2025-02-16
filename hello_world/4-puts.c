#!/bin/bash
echo 'int main (void) { puts("\"Programming is like building a multilingual puzzle\"); return 0; }' | gcc -o 4-puts -Wall -Werror -Wextra -pedantic -std=gnu89 - && ./4-puts
