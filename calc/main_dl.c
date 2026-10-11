#include <stdio.h>
#include <dlfcn.h>

int main(void)
{
    void *handle;
    int (*add)(int, int);
    int (*subtract)(int, int);
    int (*multiply)(int, int);
    double (*divide)(int, int);
    int a = 20, b = 6;

    handle = dlopen("./lib/libcalc.so", RTLD_LAZY);
    if (handle == NULL) {
        printf("오류: %s\n", dlerror());
        return 1;
    }

    add      = dlsym(handle, "add");
    subtract = dlsym(handle, "subtract");
    multiply = dlsym(handle, "multiply");
    divide   = dlsym(handle, "divide");

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d / %d = %.2f\n", a, b, divide(a, b));

    dlclose(handle);
    return 0;
}
