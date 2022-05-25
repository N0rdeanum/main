#include <stdio.h>



void info() {
    printf("Привет\n");
    printf("всем\n");
    printf("!\n");
}

void sum( int a, int b) {
    int res = a + b;
    printf("Результат: %d\n", res);
}

void string(char arr[]) {
    printf("%s\n", arr);
        }

float mult(float a, float b) {
    float res = a * b;
    printf("Результат: %.2f\n", res);
    return res;
}
