#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double s = 0.5*(a+b+c),
           area = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("%.2f", area);
}