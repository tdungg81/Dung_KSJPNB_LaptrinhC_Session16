#include <stdio.h>

void sum(int a, int b, int *result) {
    *result = a + b;
}

int main() {
    int num1 = 7; 
    int num2 = 3; 
    int result; 

    sum(num1, num2, &result);

    printf("Tong cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}
