#include <stdio.h>
#include "calc.h"

int main(){
    int a = 20, b = 6;

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d / %d = %.2f\n", a, b, divide(a, b));
    return 0;
}
