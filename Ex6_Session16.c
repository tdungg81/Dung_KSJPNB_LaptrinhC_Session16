#include <stdio.h>

int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int array[] = {1, 2, 4, 5, 6, 7}; 
    int size = sizeof(array) / sizeof(array[0]); 
    int value = 7; 

    int position = findElement(array, size, value);

    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", value, position);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang\n", value);
    }

    return 0;
}
