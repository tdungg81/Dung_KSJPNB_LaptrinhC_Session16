#include <stdio.h>

int main() {
    int value = 20; 
    int *ptr = &value;
  
    printf("Gia tri cua bien: %d\n", value);
    printf("Ðia chi cua bien: %p\n", (void*)&value);

    printf("Gia tri cua bien thong qua con tro: %d\n", *ptr);
    printf("Ðia chi cua bien thong qua con tro: %p\n", (void*)ptr);

    return 0;
}
