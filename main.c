// Created on Windows 11 (CLion) by David Hermann
#include <stdio.h>

int main() {
    int n = 0, sum = 0;
    printf("Geben Sie eine ganze Zahl ein: \n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    printf("Die Summe aller Teiler von %d ist: %d\n", n, sum);

    return 0;
}
