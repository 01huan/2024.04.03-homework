#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char bin[10];
    scanf("%s", &bin);
    int dec=0;
    for (int i=0; i<strlen(bin); i++) {
        dec += ((int)bin[i]-48)*pow(2, strlen(bin)-i-1);
    } printf("%d", dec);
}