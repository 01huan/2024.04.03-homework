#include <stdio.h>
int main() {
    int total, d50=0, d10=0, d5=0, d1=0;
    scanf("%d", &total);
    if (total >= 50) {
        d50 = total / 50;
    } total -= 50*d50;
    if (total >= 10) {
        d10 = total / 10;
    } total -= 10*d10;
    if (total >= 5) {
        d5 = total / 5;
    } total -= 5*d5;
    d1 = total;
    if (d50) {
        printf("%d*$50 ", d50);
    } if (d10) {
        printf("%d*$10 ", d10);
    } if (d5) {
        printf("%d*$5 ", d5);
    } if (d1) {
        printf("%d*$1", d1);
    }
}