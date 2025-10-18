#include <stdio.h>


int main() {
        int a = 17;
        char b = 'R';
        double pi = 3.14;
        short s = 69;


        printf("Sizes of data types:\n");
        printf("sizeof int: %ld bytes\n", sizeof(a));
        printf("sizeof char: %ld bytes\n", sizeof(b));
        printf("sizeof double: %ld bytes\n", sizeof(pi));
        printf("sizeof short: %ld bytes\n", sizeof(s));

	printf("Addresses of variables:\n");
    	printf("&a (int)    = %p\n", (void*)&a);
    	printf("&b (char)   = %p\n", (void*)&b);
    	printf("&pi (double)= %p\n", (void*)&pi);
    	printf("&s (short)  = %p\n", (void*)&s);

       return 0;

}
