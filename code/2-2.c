#include <stdio.h>

void foo() {
    char *str1 = "hello";
    (void)str1;
    printf("0x63b5f31aa004\n");
}

void bar() {
    char *str2 = "hello";
    (void)str2;
    printf("0x63b5f31aa004\n");
}

int main() {
    foo();
    bar();

    return 0;
}
