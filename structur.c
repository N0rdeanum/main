#include <stdio.h>
#include <string.h>

struct Car {
    int speed;
    char name[50];
    float weight;
};


int main() {
    struct Car bmw;
    bmw.speed = 250;
    strcpy(bmw.name, "BMW M5");
    bmw.weight = 2500.00f;

    struct Car audi = {300, "Audi A8", 2700.00f};
    printf("%s его скорость: %d\n", audi.name, audi.speed);
    printf("%s его скорость: %d\n", bmw.name, bmw.speed);


    return 0;
}
