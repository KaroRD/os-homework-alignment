#include <stdio.h>

struct struct_1 {
        char a;
        int b;
        double c;
};

struct struct_2 {
        char c;
        double b;
        int a;
};

int main() {
        struct struct_1 s1;
        struct struct_2 s2;

        printf("size of struct_1: %ld bytes\n", sizeof(s1));
        printf("address of char: %p\n", (void*)&s1.a);
        printf("address of int: %p\n", (void*)&s1.b);
        printf("address of double: %p\n", (void*)&s1.c);

        printf("size of struct_2: %ld bytes\n", sizeof(s2));
        printf("address of char: %p\n", (void*)&s2.c);
        printf("address of double: %p\n", (void*)&s2.b);
        printf("address of int: %p\n", (void*)&s2.a);

        return 0;
}
