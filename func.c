#include "fun2.h"


int main() {
    sum(20, 50);
    int x = 5, y = 7;
    sum(x, y);
    
    string("Привет");
    char world[] = {'s', 'o', 'm', 'e'};
    string(world);
    
    float result = mult(4.5f, 7.8f);
    printf("%.2f\n", result);

    return 0;
}

